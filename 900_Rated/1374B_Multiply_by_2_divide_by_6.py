def solve():
    n = int(input())
    twos,threes = 0,0
    temp = n
    while temp > 0 and temp % 2 == 0:
        twos += 1
        temp //= 2
    while temp > 0 and temp % 3 == 0:
        threes += 1
        temp //= 3
    if temp > 1 or twos > threes:
        print(-1)
    else:
        print(threes + (threes - twos))
    return

def main():
    t = int(input())
    while t:
        solve()
        t -= 1
    return 0

if __name__ == '__main__':
    main()