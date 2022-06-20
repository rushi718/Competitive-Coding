for _ in range(int(input())):
    n=int(input())
    s=input()
    ans=0
    if(len(s)==1):
        print(1)
    else:
        if(s[0]=='1'):
            ans+=1
        if(s[-1]=='1' and len(s)!=s.count('1')):
            ans-=1
        for i in range(len(s)-1):
            if(s[i]!=s[i+1]):
                ans+=1
        print(ans)
