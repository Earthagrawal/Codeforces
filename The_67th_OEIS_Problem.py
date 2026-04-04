import sys
input = sys.stdin.readline
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))

def check(i, temp):
    flag=0
    n = int(i**0.5+1)
    for j in range(2, n):
        if (i%j==0):
            flag=1
    if(flag==1):
        return
    temp.append(i)
    return

def solve():
    n = intput()
    k=0
    temp=[]
    flag=0
    for i in range(2,150000):
        if( len(temp)>n ):
            break
        flag=0
        m = int(i**0.5+1)
        for j in range(2, m):
            
            if (i%j==0):
                flag=1
                break

        if(flag==0):
            temp.append(i)

    for i in range(0,n):
        print(temp[i]*temp[i+1], end=" ")
        
    print()

t=1
t = int(input())
for _ in range(t):
    solve()
