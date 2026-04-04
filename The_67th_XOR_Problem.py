import sys
input = sys.stdin.readline
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))

def solve():
    n = intput()
    l = lput()

    m = l[0] ^ l[1]
    for i in range(n):
        for j in  range(i+1, n):
            m = max( m , l[i]^l[j])
    print(m)

t=1
t = int(input())
for _ in range(t):
    solve()
