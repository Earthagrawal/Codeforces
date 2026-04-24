import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n,x = dput()
    l = lput()

    m,M= -1,-1
    ans=0

    for i in l:

        if(m==-1 and M == -1):
            m,M = i,i

        if(i<m):
            m=i
            if(M-m > 2*x):
                ans+=1
                M,m = i,i

        elif(i>M):
            M=i
            if(M-m > 2*x):
                ans+=1
                M,m = i,i
            

    print(ans)
    
    

t=1
t = int(input())
for _ in range(t):
    solve()
