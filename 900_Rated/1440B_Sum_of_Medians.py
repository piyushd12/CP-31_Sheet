def solve():
    n,k = map(int,input().split())
    v = list(map(int,input().split()))
    res = 0
    nk = n * k
    for _ in range(k):
        nk -= (n // 2) + 1
        res += v[nk]
    print(res)
    return

def main():
    t = int(input())
    while t:
        solve()
        t -= 1
    return 0

if __name__ == '__main__':
    main()