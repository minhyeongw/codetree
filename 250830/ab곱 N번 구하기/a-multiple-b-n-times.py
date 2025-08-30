n=int(input())
for i in range(n):
    val=1
    a,b=map(int, input().split())
    for j in range(a,b+1):
        val*=j
    print(val)