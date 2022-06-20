for _ in range(int(input())):
    n=int(input())
    s='1'
    i=1
    while(i<n-1):
        s+='0'
        i+=1
    s+='1'

    print(s)