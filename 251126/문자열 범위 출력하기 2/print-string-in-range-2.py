arr=input()
num=int(input())
if num>len(arr):
    for i in range(len(arr)-1,-1,-1):
        print(arr[i],end="")
else:
    for i in range(len(arr)-1,len(arr)-num-1,-1):
        print(arr[i],end="")