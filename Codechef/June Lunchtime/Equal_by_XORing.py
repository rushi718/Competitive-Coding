from cmath import log


for _ in range(int(input())):
    a,b,n= map(int,input().split())

    if(a==b):
        print(0)
    else:
        x=a^b
        if(x<n):
            print(1)
        else:
            if(log(x)==log(n)):
                if(n&(n-1)):
                    print(2)
                else:
                    print(-1)
            else:
                print(-1)