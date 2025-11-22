n,m=map(int, input().split())
arr_2d1 = [list(map(int, input().split())) for i in range(n)]
arr_2d2 = [list(map(int, input().split())) for i in range(n)]

for i in range(n):
    for j in range(m):
        if arr_2d1[i][j] == arr_2d2[i][j]:
            print(0,end=" ")
        else:
            print(1,end=" ")
    print()