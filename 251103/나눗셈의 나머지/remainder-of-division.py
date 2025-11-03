a,b=map(int, input().split())
arr=[0]*b
while a>1:
    a=a//b
    arr[a%b]+=1
sum=0
for i in arr:
    sum+=arr[i]*arr[i]
print(sum)