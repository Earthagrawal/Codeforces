import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def gcd(a,b):
    c = a%b
    while(c!=0):
        a,b = b,c
        c = a%b
    return b

def findHighestDivisor(n):
    x = int(n**0.5 + 1)
    #print(x)
    ans=1

    for i in range(2,x):            
        if(n%i == 0):
            ans=i
            break
    
    return ans

def solve():
    n = intput()

    if(n%2==0):
        print(n//2 , n//2)
    else:
        hd = findHighestDivisor(n)
        #("hd is: ", hd)
        if(hd == 1):
            print(1,n-1)
        else:
            print(n//hd, n- n//hd )

t=1
t = int(input())
for _ in range(t):
    solve()
