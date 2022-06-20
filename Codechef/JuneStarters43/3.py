import string
s=string.ascii_lowercase
for _ in range(int(input())):
    n,k=map(int,input().split())
    
    if(n%2==0):
        t=''
        if(k<=n//2):
            s1=s[:k]
            l=n//2-k
            j=s1[0]*l
            q=t+j+s1
            t=q+q[-1::-1]
            print(t)
        else:
            print(-1)
    else:
        t=''
        if(k<=n//2+1):
            s1=s[:k]
            l=n//2+1-k
            j=s1[0]*l
            q=t+j+s1
            t=q+q[-2::-1]
            print(t)
            
        else:
            print(-1)