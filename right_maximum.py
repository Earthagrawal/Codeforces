t = int(input())
while(t>0):
    t-=1
    n = int( input() )
    l = list(map(int, input().split() ))
    count =1
    maxx = l[0]

    for i in range(1, len(l)):
        if(l[i] >= maxx):
            count+=1
            maxx = l[i]

    print(count)