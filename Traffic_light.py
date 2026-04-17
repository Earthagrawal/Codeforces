import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n, ch = input().split()
    s = input()
    n = int(n)

    ans = 1

    if(n==1 or ch == 'g'):
        print(0)
        return
    
    i=0
    while(i<n):
        #print("1st while")
        #print(i)
        if(s[i] == ch):
            count=1
            j= (i+1)%n
            while(s[j]!= 'g'):
                count+=1
                j = (j+1)%n
            ans = max(ans, count)
            i += count
        
        else:
            #print("getting into else")
            i+=1
    print(ans)
            

    

t=1
t = int(input())
for _ in range(t):
    solve()
