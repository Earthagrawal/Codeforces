import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n,r,b = dput()
    x = r//(b+1)

    plustimes = r-x*(b+1)
    ans=[]

    for i in range(plustimes):
        for j in range(x+1):
            ans.append('R')
        ans.append('B')

    #print(*ans, sep='')
    #print(b)

    m = b+1-plustimes
    for i in range(m):
        for j in range(x):
            ans.append('R')
        if(i!=m-1):
            ans.append('B')
    
    print(*ans, sep='')


t=1
t = int(input())
for _ in range(t):
    solve()
