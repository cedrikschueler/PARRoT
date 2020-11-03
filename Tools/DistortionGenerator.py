import random
import os
import numpy as np


def createDistortionFile(seeds: list, path: str, basename: str, numAgents: int, rMax: float, timestamps: list):
    if not os.path.exists(path):
        os.makedirs(path)

    for seed in seeds:
        random.seed(seed)
        for agent in range(numAgents):
            i = ""
            for t in timestamps:
                r = random.random()*rMax
                theta = random.random()*360
                phi = random.random()*180

                theta = 360 * random.random()
                phi = 360 * random.random()
                x = r * np.sin(theta) * np.cos(phi)
                y = r * np.sin(theta) * np.sin(phi)
                z = r * np.cos(theta)

                i = f'{i}{t} {x:.2f} {y:.2f} {z:.2f} '
            f = open(f'{path}/{basename}_{seed}.csv', 'a')
            f.write(f'{i}\n')
            f.close()



if __name__ == "__main__":
    for rMax in np.arange(5, 55, 5):
        seeds = np.arange(1, 26, 1)
        timestamps = np.arange(1, 901, 1)
        numAgents = 10
        basename = f'dist_{rMax}m'
        path = "distortion_10Agents"

        createDistortionFile(seeds, path, basename, numAgents, rMax, timestamps)
