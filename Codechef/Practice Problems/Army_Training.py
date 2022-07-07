# cook your dish here
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    c=0
    m=l[::-1]
    x=sum(m)
    for i in range(len(m)-1):
        s1=sum(m[:i+1])
        t=n-len(m[:i+1])
        s2= 1000*t- (x-s1)

        if(s1*s2>c):
            c=s1*s2
    print(c)

    

