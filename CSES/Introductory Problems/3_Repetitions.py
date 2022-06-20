s=input()
i=1
max_i=1
for j in range(len(s)-1):
    if(s[j]==s[j+1]):
        i+=1
    else:
        if(i>max_i):
            max_i=i
        i=1
if(i>max_i):
    print(i)
else:
    print(max_i)