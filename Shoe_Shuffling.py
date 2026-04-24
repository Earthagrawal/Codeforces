import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n = intput()
    l = lput()
    ans = []
    i=0
    index=i
    count=1
    for i in range(n-1):

        if(l[i] == l[i+1]):
            count+=1

        else:
            if(count==1):
                print(-1)
                return
            
            ans.append(index+count)
            for i in range(index+1, index+count):
                ans.append(i)
            
            i=index+count
            index = i
            count=1

    if(count==1):
        print(-1)
        return
    ans.append(index+count)
    for i in range(index+1, index+count):
        ans.append(i)
    
    print(*ans)



t=1
t = int(input())
for _ in range(t):
    solve()
