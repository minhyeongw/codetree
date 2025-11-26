g1=input()
g2=input()
g3=input()
ma=0
if len(g1)>=len(g2) and len(g1)>=len(g3):
    ma=len(g1)
elif len(g2)>len(g3):
    ma=len(g2)
else:
    ma=len(g3)

mi=0
if len(g1)<=len(g2) and len(g1)<=len(g3):
    mi=len(g1)
elif len(g2)<len(g3):
    mi=len(g2)
else:
    mi=len(g3)

print(ma-mi)