a=input()
n=[]
for i in range(len(a)):
    if i%2==1:
        n.append(a[i])

for i in range(len(n)-1,-1,-1):
    print(n[i],end="")