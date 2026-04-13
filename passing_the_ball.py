t = int(input())
while(t>0):
    t-=1
    n = int(input())
    s = input()
    count=1

    for i in range(1, len(s)):
        count+=1
        if(s[i] == "L" ):
            break
            
    print(count)

