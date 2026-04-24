import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n,k,b,s = dput()

    m = k*b
    if(s<m):
        #print(m)
        print(-1)
        return
    
    M = -1

    if(b>=n):
        #print("b")
        M = n*(2*k-1) + (b-n)*k

    else:
        #print("n")
        M = b*(2*k-1) + (k-1)*(n-b)

    if(s>M):
        #print(M)
        print(-1)
        return

    l = [0 for i in range(n)]
    
    l[0] = m
    left=s - m
    i=0

    while(left>0 and i<n):
        mini = min(left, k-1)
        l[i]+= mini
        left-=mini
        i+=1

    print(*l)

    

t=1
t = int(input())
for _ in range(t):
    solve()
