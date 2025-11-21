n = int(input())
a = list(map(int, input().split()))

# Please write your code here.
ma=max(a)
mi=min(a)
for i in a:
    if i>=mi and i<ma:
        mi=i
print(ma, mi)