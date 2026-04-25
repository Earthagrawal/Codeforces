import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n = intput()
    
    biggestPof2 =1
    if(n==2):
        print(0,1)
        return
    
    x=2
    while(n>x*2):
        x*=2
    #print(x)

    for  i in range(1,n):

        if(i==x):
            print(0,i,end=" ")
            continue

        print(i, end=" ")
    print()


t=1
t = int(input())
for _ in range(t):
    solve()
