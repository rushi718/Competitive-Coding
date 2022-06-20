n=int(input())
l=list(map(int,input().split()))
l=sorted(l)
j=False
for i in range(len(l)):
    if(i!=l[i]-1):
        j=True
        print(i+1)
        break
if((i==len(l)-1) and not j ):
    print(n)

