import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
Dict = defaultdict (list)

def solve():
    l = lput()
    n,k = l[0],l[1]
    l = lput()


    s = sum(l)
    even = (n*k)%2

    if(s%2==1  or  even==0):
        print("YES")
    else:
        print("NO")
    

t=1
t = int(input())
for _ in range(t):
    solve()


import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
Dict = defaultdict (list)

def solve():
    n = intput()
    

t=1
t = int(input())
for _ in range(t):
    solve()


