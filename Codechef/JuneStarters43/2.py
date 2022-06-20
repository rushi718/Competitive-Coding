# cook your dish here
for _ in range(int(input())):
    n,k=map(int,input().split())
    l=[1]
    c=1
    m=1
    a=0
    while(a<n-1):
        if(c<5):
            l.append(m)
            c+=1
        else:
            m+=1
            l.append(m)
            c=1
        a+=1
    print(l)
    
    s=l[k-1:-1]
    print('s',s)
    t=l.copy()
   
    t[k-1]=0
    print('t',t)
    p=t[:k]+s
    print('p',p)
    x=0
    for j in range(n):
        if(p[j]!=l[j]):
            x+=1
    print(x-1)
    