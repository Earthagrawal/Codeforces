t = int(input())

while(t):
    t-=1
    s = input()
    one, zero = 0,0
    size = len(s)
    ans=0
    for i in range (0,size):
        if(s[i] == '0'):
            zero+=1
        else:
            one+=1
        
    for i in range(0,size):
        if( (s[i] == '0') and (one>0)):
            one-=1
        elif( (s[i] == '1') and (zero>0) ):
            zero-=1
        else:
            ans = one+zero
            break


    print(ans)
        