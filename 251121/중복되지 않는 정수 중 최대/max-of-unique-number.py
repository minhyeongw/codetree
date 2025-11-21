n = int(input())
nums = list(map(int, input().split()))

# Please write your code here.
arr=list()
for i in nums:
    if nums.count(i)<=1:
        arr.append(i)
if len(arr)>0:
    print(max(arr))
else:
    print(-1)