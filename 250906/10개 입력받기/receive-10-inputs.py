sum=0
num=0
arr=list(map(int, input().split()))
for i in range(10):
    if arr[i]!=0:
        sum+=arr[i]
        num+=1
    else:
        break
print(sum,end=" ")
print(f"{sum/num:.1f}")