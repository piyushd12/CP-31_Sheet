def solve():
    s = input()
    ones,zeros = 0,0
    for i in s:
        if i == '0':
            zeros += 1
        else:
            ones += 1
    tlen = 0
    for i in s:
        if i == '0' and ones > 0:
            ones -= 1
            tlen += 1
        elif i == '1' and zeros > 0:
            zeros -= 1
            tlen += 1
        else:
            break
        
    print(len(s) - tlen)
    return

def main():
    t = int(input())
    while t:
        solve()
        t -= 1
    return 0

if __name__ == '__main__':
    main()