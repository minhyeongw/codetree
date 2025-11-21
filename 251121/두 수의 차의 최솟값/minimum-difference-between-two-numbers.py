n=int(input())
arr=list(map(int, input().split()))
diff=max(arr)

for i in range(1,n):
    for j in range(i):
        if arr[i]-arr[j]<=diff:
            diff=arr[i]-arr[j]
print(diff)