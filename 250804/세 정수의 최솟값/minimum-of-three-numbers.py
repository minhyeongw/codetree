a,b,c=map(int, input().split())
if a<=b and a<=c:
    min=a
elif b<=c:
    min=b
else:
    min=c
print(min)