# cook your dish here
for _ in range(int(input())):
    n,x=map(int,input().split())
    if(n%6==0):
        i=n//6
    else:
        i=n//6+1
    print(i*x)