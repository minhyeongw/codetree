a,b=map(int, input().split())
for i in range(4):
    for j in range(b-a+1):
        print(f"{b-j} * {2*(i+1)} = {(b-j)*2*(i+1)}",end="")
        if j!=b-a:
            print(" / ",end="")
    print()