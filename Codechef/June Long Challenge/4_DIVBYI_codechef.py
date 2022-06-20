import math
for _ in range(int(input())):
    n=int(input())
    x= math.ceil(n/2)
    l=[None]*n
  
    m=n-1
    z=n
    while(x>0):
        l[m]=z
        m=m-2
        z=z-1
        x=x-1

    if(n%2==0):
        q=0
    else:
        q=1
    
    y=math.ceil(n/2)
    p=n-y
    while(p>0):
        l[q]=z
        q+=2
        z=z-1
        p=p-1
    
    print(*l)

