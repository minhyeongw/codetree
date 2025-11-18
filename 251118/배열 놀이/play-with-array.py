n,q=map(int, input().split())
arr=list(map(int, input().split()))
for i in range(0,q):
    num=list(map(int, input().split()))
    if num[0]==1:
        print(arr[num[1]-1])
    elif num[0]==2:
        if num[1] in arr:
            print(arr.index(num[1])+1)
        else:
            print(0)
    elif num[0]==3:
        for j in range(num[1]-1,num[2]):
            print(arr[j],end=" ")
        print()