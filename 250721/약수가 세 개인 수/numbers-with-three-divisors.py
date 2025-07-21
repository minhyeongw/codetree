start, end = map(int, input().split())
total=0
for i in range(start, end+1):
    sum=0
    for j in range(1,i+1):
        if i%j==0:
            sum+=1
    if sum==3:
        total+=1
print(total)
# Please write your code here.
