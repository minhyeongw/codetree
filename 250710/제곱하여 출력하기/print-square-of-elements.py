n=int(input())
original=list(map(int,input().split()))
doubled=[x**2 for x in original]
for i in range(n):
    print(doubled[i],end=" ")