# cook your dish here
#Best Solution 
for _ in range(int(input())):
    a,b= map(int,input().split())
    c=b-a
    x=(c//3+1)*3
    if(c%3==0):
        print("YES")
    elif(c==x-2 or c==x+1):
        print("YES")
    else:
        print("NO")
    