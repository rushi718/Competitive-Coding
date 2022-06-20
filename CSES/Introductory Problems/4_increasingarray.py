n=int(input())
s=list(map(int,input().split()))
p=0
for i in range(1,len(s)):
    if(s[i]<s[i-1]):
        p+=s[i-1]-s[i]
        s[i]=s[i-1]

print(p)