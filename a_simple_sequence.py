import sys
input = sys.stdin.readline

def solve():
    n = int(input())

    for i in range(n,0,-1):
        print(i, end=" ")
    print()

t=1
t = int(input())
for _ in range(t):
    solve()
