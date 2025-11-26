g1,g2=input().split()
if len(g1)>len(g2):
    print(g1,len(g1))
elif len(g1)<len(g2):
    print(g2,len(g2))
else:
    print("same")