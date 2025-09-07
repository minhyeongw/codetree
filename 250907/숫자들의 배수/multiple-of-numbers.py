n=int(input())
arr=[]
num=0
a=1
while num!=2:
   ele=n*a
   arr.append(ele)
   a+=1
   if ele%5==0:
    num+=1
for i in range(len(arr)):
    print(arr[i],end=" ")