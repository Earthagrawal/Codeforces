t = int(input())


def gcd (a,b):
    c = a%b
    while(c>0):
        a,b = b,c
        c = a%b
    return b

while(t):
    t-=1
    a,b,c,m = map(int, input().split())
    
    if(a>b):
        p = gcd (a,b)
    else:
        p = gcd (b,a)
    ab = a*b/(p)


    if(c>b):
        q = gcd (c,b)
    else:
        q = gcd (b,c)
    bc = c*b/(q)
    

    if(a>c):
        r = gcd (a,c)
    else:
        r = gcd (c,a)
    ca = a*c/r

    if(ca>b):
        pqr = gcd (ca,b)
    else:
        pqr = gcd (b,ca)
    abc = ca*b/pqr

    together3 = (m//abc)
    together2ab = (m//ab)
    together2bc = (m//bc)
    together2ca = (m//ca)

    together2ab,together2bc,together2ca = together2ab-together3 ,together2bc-together3 ,together2ca-together3 

    ansa, ansb, ansc = 0,0,0

    ansa += (together3*2)  
    ansb += (together3*2)
    ansc += (together3*2)

    ansa, ansb = ansa+(together2ab*3) , ansb+(together2ab*3)
    ansb, ansc = ansb+(together2bc*3) , ansc+(together2bc*3)
    ansc, ansa = ansc+(together2ca*3) , ansa+(together2ca*3)
     
   
    z  = m//a
    z -= (together2ab + together2ca + together3)

    ansa += z*6
        
    
    
    z  = m//b
    z -= (together2ab + together2bc + together3)
    ansb += z*6

    z  = m//c
    z -= ( together2bc + together2ca + together3)
    ansc += z*6

    print(int(ansa), int(ansb), int(ansc))



