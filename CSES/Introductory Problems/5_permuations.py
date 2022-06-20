def printl(l):
    for i in l:
        print(i,end=" ")
n=int(input())
if(n==1):
    print(1)
elif(n==2 or n==3):
    print('NO SOLUTION')
else:
    a=[None]*n
    if(n%2==0):
        s=n/2
        t=0
        i=1
        k=1
        while(t<s):
            a[i]=k
            i+=2
            k+=1
            t+=1
        t=0
        i=0
        while(t<n-s):
            a[i]=k
            i+=2
            k+=1
            t+=1
        printl(a)
    else:
        s=n//2+1
        t=0
        i=0
        k=1
        while(t<s):
            a[i]=k
            i+=2
            k+=1
            t+=1
        t=0
        i=1
        while(t<n-s):
            a[i]=k
            i+=2
            k+=1
            t+=1
        printl(a)
        


