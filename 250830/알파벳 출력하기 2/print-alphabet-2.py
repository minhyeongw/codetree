n=int(input())
cnt=65
for i in range(n):
    for j in range(i):
        print(" ",end=" ")
    for j in range(n-i):
        if cnt>90:
            cnt=65
        print(chr(cnt),end=" ")
        cnt+=1
    print()