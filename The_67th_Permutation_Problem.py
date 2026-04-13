import sys
input = sys.stdin.readline
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))

def solve():
    n = intput()
    l = []
    index = 0
    j=1
    k=n+1
    for i in range(n):
        l.append(j)
        j+=1
        l.append(k)
        l.append(k+1)
        k+=2
        print(l[index],l[index+1],l[index+2], end=" ")
        index +=3
    

    print()

    
    

t=1
t = int(input())
for _ in range(t):
    solve()
