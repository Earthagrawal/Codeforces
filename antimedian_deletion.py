import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    if(n==1):
        t = int(input())
        print(1)
    else:
        t = list(map(int , input().split()))
        for i in range(0,n):
            
            print(2, end=" ")
        print()

    




t=1
t = int(input())
for _ in range(t):
    solve()
