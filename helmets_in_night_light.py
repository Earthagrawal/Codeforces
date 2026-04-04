t = int(input())
while(t):
    t-=1
    people, headCost = map(int, input().split())
   
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = []
    d = { }

    ans=0
    
    m = len(set(b))
    for i in (set(b)):
        d[i] = []

    for i,n in zip(b,a):
        d[i].append(n)

    for i in d:
        d[i].sort()
        d[i].reverse()

    d = dict( sorted (d.items()))

    people-=1
    ans += headCost
    flag=0

    for i in d:
        if(people <=0):
            break
        if(i >= headCost):
            ans  += headCost*people
            print(ans)
            flag=1
            break
            

        else:
            li = d[i]
            for j in li:
                if(people <= 0):
                    break
                
                if( (people - j) <=0):
                    ans+= people*i
                else:
                    ans += j*i
                people -= j

    
    if(flag == 0):
        print(ans)
   