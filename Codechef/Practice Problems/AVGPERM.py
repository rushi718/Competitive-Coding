# cook your dish here
for _ in range(int(input())):
    n=int(input())
    l=[]
    if(n%2==0):
        i=n-1
        while(i>0):
            l.append(i)
            i-=2
        j=2
        while(j<=n):
            l.append(j)
            j+=2
    else:
        i=n-1
        while(i>0):
            l.append(i)
            i-=2
        j=1
        while(j<=n):
            l.append(j)
            j+=2
        
    print(*l)
