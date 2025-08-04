a1,g1=input().split()
a2,g2=input().split()
a1=int(a1)
a2=int(a2)
if (a1>=19 and g1=="M") or (a2>=19 and g2=="M"):
    print(1)
else:
    print(0)