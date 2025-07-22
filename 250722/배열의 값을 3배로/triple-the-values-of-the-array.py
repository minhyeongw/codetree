matrix=[list(map(int,input().split())) for _ in range(3)]
new_matrix= [
    [element*3 for element in row]
    for row in matrix]
for i in range(3):
    for j in range(3):
        print(new_matrix[i][j],end=" ")
    print()