import sys
input = sys.stdin.readline
from collections import defaultdict
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))

def solve():
    l = lput()
    n, k = l[0], l[1]
    l = lput()
    l0 = []
    lelse= []

    for i,n in enumerate(l):
        if(n%k == 0):
            l0.append(i+1)
        else:
            lelse.append( [ n%k, i+1 ] )
    
    result = l0[:]
    for i,n in sorted(lelse, key=lambda x: x[0], reverse=True):
        result.extend([n])
        
    
    print(*result)
    

t=1
t = int(input())
for _ in range(t):
    solve()
