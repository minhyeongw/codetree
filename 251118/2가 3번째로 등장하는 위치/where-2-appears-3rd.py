n=int(input())
arr=list(map(int, input().split()))
num=0
for i in range(len(arr)):
    if arr[i]==2:
        num+=1
    if num==3:
        k=i+1
        break
print(k)