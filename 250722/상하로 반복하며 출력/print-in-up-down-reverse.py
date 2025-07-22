n=int(input())
arr=[[0 for _ in range(n)] for _ in range(n)]
for j in range(n):
    for i in range(n):
        if j%2==0:
            arr[i][j]=i+1
        else:
            arr[i][j]=n-i
for i in range(n):
    for j in range(n):
        print(arr[i][j],end="")
    print()
