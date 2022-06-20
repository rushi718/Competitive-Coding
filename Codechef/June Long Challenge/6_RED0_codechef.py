for _ in range(int(input())):
    x,y=map(int,input().split())
    
    if(x==y):
        print(x)
    elif(x==0 or y==0):
        print(-1)
    else:    
        a_min= x if x<y else y
        b_max= y if x<y else x
        c=0
        while(a_min< b_max):
            a_min=a_min*2
            c+=1
        if(a_min>=b_max):
            a_min=a_min//2
            c-=1
        d=a_min-(b_max-a_min)
        a_min-=d
        b_max-=d
        c+=d
        a_min*=2
        c+=1
        c+=b_max
        print(c)