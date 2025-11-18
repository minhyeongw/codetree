arr=list(map(int, input().split()))
max_arr=arr[0]
for i in arr:
    if i>max_arr:
        max_arr=i
print(max_arr)