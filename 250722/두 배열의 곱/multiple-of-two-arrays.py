first_matrix=[]
for i in range(3):
    row_data=list(map(int,input().split()))
    first_matrix.append(row_data)
input()
second_matrix=[]
for j in range(3):
    row_data=list(map(int, input().split()))
    second_matrix.append(row_data)

new_matrix=[
    [0 for _ in range(3)]
    for _ in range(3)
]

for i in range(3):
    for j in range(3):
        new_matrix[i][j]=first_matrix[i][j]*second_matrix[i][j]

for i in range(3):
    for j in range(3):
        print(new_matrix[i][j],end=" ")
    print()