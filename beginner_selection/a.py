def main():
    a = int(input().strip())
    b, c = [int(s.strip()) for s in input().split()][:2]
    s = input()

    print(a + b + c, s)


if __name__ == '__main__':
    main()