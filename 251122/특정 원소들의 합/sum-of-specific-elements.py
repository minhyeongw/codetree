arr_2d = [list(map(int, input().split())) for i in range(4)]

sumele=0
for i in range(4):
    for j in range(i+1):
        sumele+=arr_2d[i][j]
print(sumele)