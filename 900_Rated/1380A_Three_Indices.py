def solve():
    n = int(input())
    v = list(map(int,input().split()))
    for j in range(1,n-1):
        if v[j] > v[j-1] and v[j] > v[j+1]:
            print("YES")
            print(j,j+1,j+2)
            return
    print("NO")
    return

def main():
    t = int(input())
    while t:
        solve()
        t -= 1
    return 0

if __name__ == '__main__':
    main()