arr=input()
num=int(input())
for i in range(len(arr)-1,len(arr)-num-1,-1):
    print(arr[i],end="")