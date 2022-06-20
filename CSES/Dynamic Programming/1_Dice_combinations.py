mod=1000000007
n=int(input())
dp=[0 for i in range(n+1)]
dp[0]=dp[1]=1

i=2
while(i<n+1):
    j=1
    while(j<7):
        if (i-j)>=0:
            dp[i]+=dp[i-j]
            dp[i]=dp[i]%mod
        else:
            break
        j+=1
    i+=1    

print(dp[n])




