def solve():
    n = int(input())
    if (n & (n - 1)) == 0:
        print("NO")
    else:
        print("YES")
    return

def main():
    t = int(input())
    while t:
        solve()
        t -= 1
    return 0

if __name__ == '__main__':
    main()