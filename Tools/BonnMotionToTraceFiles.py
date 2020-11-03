import argparse
import os
import csv


def main(folder: str, input: str, timeUnit: str, dimensions: int) -> None:
    hosts = dict()
    if not os.path.exists(folder):
        os.makedirs(folder)
    with open(input, 'r') as f:  # open in readonly mode
        data = csv.reader(f, delimiter=" ")
        number = 0
        for row in data:
            key = f'{number}'
            hosts[key] = "time,x,y,z\n"
            for ii in range(int(len(row)/(dimensions + 1))):
                i = ii*(dimensions +1)
                if dimensions == 2:
                    hosts[key] = f'{hosts[key]}{row[i]},{row[i+1]},{row[i+2]},0.0\n'
                else:
                    hosts[key] = f'{hosts[key]}{row[i]},{row[i + 1]},{row[i + 2]},{row[i+3]}\n'
            number += 1

    for key in hosts.keys():
        with open(os.path.join(folder, f'host[{key}].csv'), 'w') as out:
            out.write(hosts[key])
            out.close()

if __name__ == "__main__":
    main(f'outputfolder', f'BonnMotionFile.csv', 's', 3)

