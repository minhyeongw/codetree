arr_2d = [list(map(int, input().split())) for i in range(2)]
sumall=0
for i in range(2):
    sumg=0
    for j in range(4):
        sumg+=arr_2d[i][j]
        sumall+=arr_2d[i][j]
    print(sumg/4,end=" ")
print()

for i in range(4):
    sums=0
    for j in range(2):
        sums+=arr_2d[j][i]
    print(sums/2,end=" ")
print()

print(sumall/8)