def solve():
    n,x = map(int,input().split())
    mini,maxi = 0,0
    import math
    for k in map(int, input().split()):
        maxi += math.ceil(k / x)
        mini += k
    mini = math.ceil(mini / x)
    print(mini,maxi)
    return

def main():
    t = int(input())
    while t:
        solve()
        t -= 1
    return 0

if __name__ == '__main__':
    main()