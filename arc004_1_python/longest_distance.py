"""
https://arc004.contest.atcoder.jp/tasks/arc004_1
"""
import math


def main():
    num = int(input().strip())
    points = []
    for i in range(num):
        x, y = input().strip().split()
        points.append((int(x), int(y)))

    longest = 0.0
    for p1 in points:
        for p2 in points:
            if p1 == p2:
                continue
            d = math.sqrt(math.pow(p1[0] - p2[0], 2) + math.pow(p1[1] - p2[1], 2))
            if longest < d:
                longest = d
    print(longest)


if __name__ == '__main__':
    main()
