n=int(input())
count=0
sum=0
for i in range(n):
    arr=input()
    sum+=len(arr)
    if arr[0]=="a":
        count+=1
print(sum, count)
