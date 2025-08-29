n=int(input())
f,s=1,n
for i in range(1,2*n+1):
    if i%2==0:
        for j in range(s):
            print("*",end=" ")
        print()
        s-=1
    else:
        for j in range(f):
            print("*",end=" ")
        print()
        f+=1