a=list(map(int, input().split()))
num=list()
for i in a:
    if i==999 or i==-999:
        break
    num.append(i)
print(max(num), min(num))