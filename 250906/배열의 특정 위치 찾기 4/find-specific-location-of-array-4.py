arr=list(map(int, input().split()))
sum,num=0,0
for i in range(10):
    if arr[i]==0:
        break
    if arr[i]%2==0:
        sum+=arr[i]
        num+=1
print(num,sum,end=" ")