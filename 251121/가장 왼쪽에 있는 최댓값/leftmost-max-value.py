n = int(input())
a = list(map(int, input().split()))
num=10

# Please write your code here.
while num!=1:
    ma=max(a)
    for i in range(len(a)):
        if a[i]==ma:
            print(a.index(a[i])+1,end=" ")
            num=a.index(a[i])+1
            del a[i:]
            
            break