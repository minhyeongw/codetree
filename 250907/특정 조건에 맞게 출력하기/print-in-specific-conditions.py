arr=list(map(int, input().split()))
new_arr=[]
for i in range(len(arr)):
    if arr[i]!=0:
        new_arr.append(arr[i])
    else:
        break
for i in range(len(new_arr)):
    if arr[i]%2==1:
        print(arr[i]+3,end=" ")
    else:
        print(arr[i]//2,end=" ")