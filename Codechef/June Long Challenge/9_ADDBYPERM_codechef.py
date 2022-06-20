def api(p,a):
    l=[None]*len(a)
    p= [x-1 for x in p]
    for i in range(len(p)):
        l[i]=a[p[i]]
    return l
def add(x,y):
    return [m+n for m,n in zip(x,y)]
n,k=map(int,input().split())
a=list(map(int,input().split()))
p=list(map(int,input().split()))

while(k>0):
    c=api(p,a)
    a=add(a,c)
    k-=1
t=[]
for i in a:
    t.append(i%998244353)
print(t)