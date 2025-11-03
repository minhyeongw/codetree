a,b=map(int, input().split())
arr=[0]*b
while a>1:
    arr[a%b]+=1
    a=a//b
    
sum=0
for i in arr:
    
    sum+=i**2
print(sum)