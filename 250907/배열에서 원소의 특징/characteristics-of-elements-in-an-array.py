arr=list(map(int, input().split()))
for i in range(10):
    if arr[i]%3==0:
        n=i
        break
print(arr[n-1])