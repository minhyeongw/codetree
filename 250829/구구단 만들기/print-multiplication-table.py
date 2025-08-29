a,b=map(int, input().split())
cnt=1
while b!=a:
    cnt+=1
    b-=2
b=b+2*(cnt-1)
for i in range(9):
    for j in range(cnt):
        print(f"{b} * {i+1} = {b*(i+1)}",end="")
        if j!=cnt-1:
            print(" / ",end="")
        b-=2
    b=b+2*(cnt)
    print()