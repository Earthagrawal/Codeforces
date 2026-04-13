import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n,k,q = dput()
    l = lput()
    i=0
    ansl=[]

    for n in l:
        if(n<=q):
            i+=1
        else:
            if(i>0):
                ansl.append(i)
                i=0
    if(i):
        ansl.append(i)
    
    ans=0

    for j in ansl:
        if(j<k):
            continue
        else:
            n= j-k+1
            ans+= (n*(n+1))//2
    
    print(ans)


    

t=1
t = int(input())
for _ in range(t):
    solve()
