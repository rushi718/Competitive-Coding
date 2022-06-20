import math
for _ in range(int(input())):
    a,b=map(int,input().split())
    d=abs(b-a)
    c=0
    i=1
    while(i<=math.sqrt(d)):
        if(d%i==0):
            if(d/i==i):
                c+=1
            else:
                c+=2
        i+=1
    print(c)
