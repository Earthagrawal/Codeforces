import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n = intput()
    l1 = lput()
    l2 = lput()
    digitl1, digitl2 = [0 for i in range(2*n+1)], [0 for i in range(2*n+1)]
    

    counter1=1
    counter2=1
    i=0
    for i in range(1,n):
            

            if l1[i] == l1[i-1]:
                counter1+=1
            else:
                digitl1[l1[i-1]] = max(digitl1[l1[i-1]] , counter1)
                #print(counter1, digitl1[l1[i-1]], 1)
                counter1=1

            if l2[i] == l2[i-1]:
                counter2 += 1
                #print("increased",counter2, i, l2[i])
            else:
                #print("renew",digitl2[l2[i-1]],l2[i-1], counter2)
                digitl2[l2[i-1]] = max(digitl2[l2[i-1]] , counter2)
                counter2=1

    digitl1[l1[n-1]] = max(digitl1[l1[n-1]] , counter1)
    #print(counter1,digitl1[l1[n-1]], 2)
    digitl2[l2[n-1]] = max(digitl2[l2[n-1]] , counter2)
    
    #print(digitl1)
    #print(digitl1)
    #print((digitl2))

    for j in range(2*n+1):
        digitl2[j]+=digitl1[j]
    
    #print(digitl2)

    print(max(digitl2))


t=1
t = int(input())
for _ in range(t):
    solve()
