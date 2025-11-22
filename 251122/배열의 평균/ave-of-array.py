arr_2d = [list(map(int, input().split())) for i in range(2)]
sumall=0
for i in range(2):
    sumg=0
    for j in range(4):
        sumg+=arr_2d[i][j]
        sumall+=arr_2d[i][j]
    print(f"{sumg/4:.1f}",end=" ")
print()

for i in range(4):
    sums=0
    for j in range(2):
        sums+=arr_2d[j][i]
    print(f"{sums/2:.1f}",end=" ")
print()

print(f"{sumall/8:.1f}")