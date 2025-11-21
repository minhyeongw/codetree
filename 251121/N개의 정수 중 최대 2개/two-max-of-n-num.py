n = int(input())
a = list(map(int, input().split()))

# Please write your code here.
ma=max(a)
down=list()
for i in range(n):
    if ma-i in a:
        down.append(ma-i)

print(down[0],down[1])