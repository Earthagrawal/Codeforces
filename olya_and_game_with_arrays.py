import sys
input = sys.stdin.readline
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))

def solve():
    n = intput()
    matrix = [ [] for i in range(n)   ]
    for i in range(n):
        temp = int(input())
        matrix[i] = lput()
    m1 = []
    m2 = []
    for i in range(n):

        a=matrix[i][0]
        b = matrix[i][1]

        if(a>b):
            a,b = b,a

        for j in  range(2,len(matrix[i])):

            if(matrix [i][j]  < a and matrix [i][j]  < b):
                a,b = matrix[i][j] , a
            elif(matrix[i][j]< b):
                b = matrix[i][j]
        
        m1.append(a)
        m2.append(b)

    ans = 0
    minn = 0
    temp = m1[0]
    for i in range(len(m1)):
        if(m1[i] < temp):
            minn = i
            temp = m1[i]

    minn2 = 0
    temp = m2[0]
    for i in range(len(m2)):
        if(m2[i] < temp):
            minn2 = i
            temp = m2[i]
    
    ans+= m1[minn]
    for i in range(len(m2)):
        if(i != minn2):
            ans += m2[i]

    print(ans)


t=1
t = int(input())
for _ in range(t):
    solve()
