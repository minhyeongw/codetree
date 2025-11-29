n=int(input())
tot=""
a=input().split()
for i in range(n):
    tot+=a[i]
cnt=1
print(tot[0],end="")
for i in range(1,len(tot)):
    if cnt%5!=0:
        print(tot[i],end="")
        cnt+=1
    else:
        cnt=0
        print()
        print(tot[i],end="")
        cnt+=1
