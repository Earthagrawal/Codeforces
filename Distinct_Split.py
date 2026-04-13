import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n = intput()
    m=1
    s = input()
    sset = set()
    prefix,suffix=[],[ 0 for i in range(n)]

    for i in range(n):
        sset.add(s[i])
        prefix.append(len(sset))
    
    #print(sset)
    #print(prefix)
    sset.clear()

    for i in range(n-1, -1, -1):
        sset.add(s[i])
        suffix[i]= len(sset)
    #print(suffix)
    
    for i in range(n-1):
        m  = max( m, prefix[i]+suffix[i+1]  )

        

    print(m)

t=1
t = int(input())
for _ in range(t):
    solve()
