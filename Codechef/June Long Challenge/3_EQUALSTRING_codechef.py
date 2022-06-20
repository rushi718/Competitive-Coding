for _ in range(int(input())):
    n=int(input())
    a=str(input())
    b=str(input())
    l=[]
    for i in range(n):
        if(a[i]!=b[i]):
            l.append(b[i])

    print(len(set(l)))

