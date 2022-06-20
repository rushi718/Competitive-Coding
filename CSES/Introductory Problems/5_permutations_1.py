def printl(l):
    for i in l:
        print(i,end=" ")
n=int(input())
if(n==1):
    print(1)
elif(n==2 or n==3):
    print('NO SOLUTION')
else:
    l=[]
    i=1
    j=2
    while(j<=n):
        l.append(j)
        j+=2
    while(i<=n):
        l.append(i)
        i+=2
    printl(l)