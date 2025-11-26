n=int(input())
arr1=input()
arr2=input()
arr3=input()
count=0
if arr1[0]=='a':
    count+=1
if arr2[0]=='a':
    count+=1
if arr3[0]=='a':
    count+=1
print(len(arr1)+len(arr2)+len(arr3),count)