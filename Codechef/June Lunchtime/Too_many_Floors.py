import math
for _ in range(int(input())):
    x,y = map(int,input().split())

    f=x/10
    z=y/10

    print(abs(math.ceil(f)-math.ceil(z)))