arr=[0 for i in range(11)]
arr[0],arr[1]=map(int, input().split())
for i in range(9):
    arr[i+2]=arr[i]+arr[i+1]
    while(arr[i+2]>=10):
        arr[i+2]-=10
    print(arr[i],end=" ")
print(arr[9])
