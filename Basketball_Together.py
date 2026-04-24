import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n,d = dput()
    #print(n,d)
    l = lput()

    l = sorted(l, reverse=True)
    #print(l)

    i,j=0,n-1
    pleft=n
    ans=0
    while(i<=j and pleft>0):
        req = (d+ l[i] )//l[i]
        pleft-=req

        if(pleft <0):
            break
        ans+=1
        req-=1
        i+=1
        j-=req

    print(ans)
    

t=1
#t = int(input())
for _ in range(t):
    solve()
