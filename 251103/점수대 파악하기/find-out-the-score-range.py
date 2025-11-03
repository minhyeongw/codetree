score=list(map(int, input().split()))
count=[0]*11
for i in score:
    if i==0:
        break
    count[i//10]+=1
for i in range(10,0,-1):
    print(f"{i*10} - {count[i]}")