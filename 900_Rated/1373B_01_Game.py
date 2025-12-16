def solve():
    s = input()
    zeros,ones = 0,0
    for i in s:
        if i == '0':
            zeros += 1
        else:
            ones += 1

    if min(zeros,ones) & 1:
        print("DA")
    else:
        print("NET")
    return

def main():
    t = int(input())
    while t:
        solve()
        t -= 1
    return 0

if __name__ == '__main__':
    main()