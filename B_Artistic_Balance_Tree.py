import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)


t = int(input())
for _ in range(t):
    n,m = dput()
    l = lput()
    take = lput()
    odd = []
    even=[]
    takeE,takeO=0,0

    for i in range(n):
        if(i%2==0):
            even.append(l[i])
            continue
        odd.append(l[i])
    
    for i in range(m):
       # print(i)
        if(take[i]%2==1):
            takeE+=1
        elif(take[i]%2==0):
            takeO+=1

    odd.sort(reverse=True)
    even.sort(reverse=True)
    
    index1=0
    index2=0
 
    for i in range(takeE):
        if(index1 == len(even)):
            break
        if( even[index1]>0 or i==0 ):
            index1+=1
        
    for i in range(takeO):
        if(index2 == len(odd)):
            break
        if( odd[index2]>0 or i==0):
            index2+=1

    #print("even: ",even)
    #print("odd: ",odd)
    #print(takeE, takeO)

    s = sum(even[index1:])
    s+= sum (odd[index2:])

    print(s)



    
    
