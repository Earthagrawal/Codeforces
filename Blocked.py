t = int(input())

while(t>0):
    t-=1 
    n = int(input())
    l = list(map(int, input().split()))

    if(len(l)> len(set(l))):
        print(-1)
        continue

    l = sorted(l, reverse=True)
    
    print(*l)

       