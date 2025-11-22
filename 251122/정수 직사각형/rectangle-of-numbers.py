n,m=map(int, input().split())
arr_2d = [[0 for i in range(m)] for j in range(n)]
num=1
for i in range(n):
    for j in range(m):
        arr_2d[i][j] = num
        num+=1
        print(arr_2d[i][j],end=" ")
    print()