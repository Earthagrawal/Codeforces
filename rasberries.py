import sys
input = sys.stdin.readline

def solve():
    n,k = map(int, input().split())
    l = list(map(int, input().split()))
    ans = k - (l[0] % k) 
    ans = (ans%k)
    size = len(l)

    if(k == 2 or k==3 or k==5):
        for i in range(1, size ):
            ans = min(ans , (k - (l[i] % k) )% k )
            ans = (ans)

    else:
        flag3=0
        flag2=0
        flag1=0
        for i in range(0, size ):
            if( l[i]%4 == 2 ):
                flag2+=1
            elif(l[i]%4 == 1):
                flag1+=1
            elif(l[i]%4 == 3):
                flag3+=1 
            else:
                ans=0
                print(ans)
                return
        
        if(flag2>1):
            ans =0
        elif (flag2 == 1  or flag3>0 ):
            ans=1
        else:
            ans = 2

        


        
    print(ans )

t = int(input())
for _ in range(t):
    solve()
