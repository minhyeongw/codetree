n=int(input())

arr_2d = [[0 for i in range(n)] for j in range(n)]
num=1
count=0
for i in range(n-1,-1,-1):
    if count%2==1:
        for j in range(n):
            arr_2d[j][i]=num
            num+=1
    else:
        for j in range(n-1,-1,-1):
            arr_2d[j][i]=num
            num+=1
    count+=1

for i in range(n):
    for j in range(n):
        print(arr_2d[i][j],end=" ")
    print()