# cook your dish here
#TLE Excedeed 
#Solution1 - Naive Approach
for _ in range(int(input())):
    a,b= map(int,input().split())
    c=b-a
    j=1
    i=0
    while(i<c):
        if(j%2==0):
            i+=2
        else:
            i+=1
        j+=1
    if(i==c):
        print("YES")
    else:
        print("NO")

        