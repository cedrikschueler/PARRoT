import argparse
import os
import csv
import re
def atoi(text):
    return int(text) if text.isdigit() else text
def natural_keys(text):
    return [ atoi(c) for c in re.split('(\d+)',text) ]

def main(folder: str, output: str, timeUnit: str, dimensions: int) -> None:
    lines: [str] = []
    xmax = 0.0
    ymax = 0.0
    zmax = 0.0
    filelist = os.listdir(folder)

    for file in filelist:
        if '.mat' in file or 'wp_' in file:
            filelist.remove(file)
    filelist.sort(key=natural_keys)
    for filename in filelist:
        if '.mat' in filename or 'wp_' in filename:
            continue
        bonnmotiondata: str = ""
        print("handling ", filename)
        with open(os.path.join(folder, filename), 'r') as f:  # open in readonly mode
            data = csv.reader(f)
            for row in data:
                if row[0] == 'time' and row[1] == 'x' and row[2] == 'y' and row[3] == 'z':
                    continue
                if (timeUnit == 'ms'):
                    t = str(float(row[0]) / 1000.0)
                else:
                    t = row[0]
                if dimensions == 2:
                    bonnmotiondata = f'{bonnmotiondata}{t} {row[1]} {row[2]} '
                elif dimensions == 3:
                    bonnmotiondata = f'{bonnmotiondata}{t} {row[1]} {row[2]} {row[3]} '
        lines.append(bonnmotiondata)
    with open(output, 'w') as out:
        result = ""
        for data in lines:
            result = f'{result}{data}\n'
        print(len(lines))
        out.write(result)
        out.close()

if __name__ == "__main__":
    main(f'inputfolder', f'outputfolder/bonnmotionfile.csv', 's', 3)
