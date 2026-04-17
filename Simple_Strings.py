import sys
input = sys.stdin.readline
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def check(ch1, ch2):
    if(ch1!='a' and ch2!='a'):
        return 'a'
    elif(ch1!='b' and ch2!='b'):
        return 'b'
    else:
        return 'c'

def solve():
    s = input()
    n = len(s)
    l=['' for i in range(n)]
    i=0
    while(i<n-1):
        if(s[i]==s[i+1] ):
            l[i] = s[i]
            if(i!= n-2):
                ch = check(s[i], s[i+2] )
                #print("we just got the va;ur: ", ch)
                #print("we sent: ", s[i], s[i+2])
                l[i+1] = ch
                
                i +=2
            else:
                ch = chr(97 + (ord(s[i+1] )+2)%5)
                l[i+1] = ch
                i+=2
        else:
            l[i] = s[i]
            i+=1

    print(''.join(l))

t=1
#t = int(input())
for _ in range(t):
    solve()
