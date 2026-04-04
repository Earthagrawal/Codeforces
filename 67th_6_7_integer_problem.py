import sys
input = sys.stdin.readline
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))

def solve():
    
    l = lput()
    n = max(l)
    s  = sum(l)
    s-=n
    s*= -1
    print(n+s)

t=1
t = int(input())
for _ in range(t):
    solve()
