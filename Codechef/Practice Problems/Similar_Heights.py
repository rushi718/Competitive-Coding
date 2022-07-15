# cook your dish here
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    
    d={}
    k=0
    ans=0
    for i in l:
        d[i]=0
    for i in l:
        d[i]+=1
    mx1=max(l)
    mx2=max(d.values())
    for val in d.values():
        if(val==1):
            ans+=1
    if(ans%2):
        y=(ans+1)//2
        if(d[mx1]==1):
            if(mx2==2):
                y+=1
        print(y)
    else:
        y=ans//2
        print(y)
        
    
    