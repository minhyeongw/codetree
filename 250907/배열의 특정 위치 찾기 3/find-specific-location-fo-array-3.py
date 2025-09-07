arr=list(map(int, input().split()))
for i in range(len(arr)):
    if arr[i]==0:
        n=i
        break
sum=arr[n-1]+arr[n-2]+arr[n-3]
print(sum)