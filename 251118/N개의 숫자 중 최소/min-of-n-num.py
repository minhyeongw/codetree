n = int(input())
a = list(map(int, input().split()))

# Please write your code here.
min_arr=a[0]
for i in a:
    if i<min_arr:
        min_arr=i

num=0
for i in a:
    if i==min_arr:
        num+=1
print(min_arr, num)