n=int(input())
arr=[]
arr.append(1)
arr.append(n)
for i in range(2,100):
    ele=arr[i-2]+arr[i-1]
    arr.append(ele)
    if ele>100:
        break
for i in range(len(arr)):
    print(arr[i],end=" ")