arr=[]
n1,n2=map(int, input().split())
arr.append(n1)
arr.append(n2)
for i in range(2,10):
    n=arr[i-2]+arr[i-1]
    if n>=10:
        n=n%10
    arr.append(n)
for i in range(10):
    print(arr[i],end=" ")