arr=list(map(int, input().split()))
count_arr=[0]*10
for i in arr:
    count_arr[i//10]+=1
for i in range(1,10):
    print(f"{i} - {count_arr[i]}")