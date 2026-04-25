import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n,k = dput()
    s = input()

    i,j=0,k-1
    wcount=0

    for a in range(i,k):
        if(s[a]=='W'):
            wcount+=1
    
    temp=wcount
    #print(wcount)
    j+=1

    while(j<n):
        if(s[j]=='W'):
            temp+=1
        
        if(s[i]=='W'):
            temp-=1
        i+=1
        j+=1

        wcount = min(wcount,temp)
    
    print(wcount)


    

t=1
t = int(input())
for _ in range(t):
    solve()
