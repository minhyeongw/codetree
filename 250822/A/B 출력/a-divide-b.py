a,b=map(int, input().split())
c=a%b
print(a//b,end=".")
for i in range(20):
    d=(c*10)//b
    print(d,end="")
    c=(c*10)%b
    