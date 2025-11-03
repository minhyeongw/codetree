sy1,tem1=input().split()
sy2,tem2=input().split()
sy3,tem3=input().split()
tem1=int(tem1)
tem2=int(tem2)
tem3=int(tem3)
symptom=[sy1,sy2,sy3]
temperature=[tem1,tem2,tem3]
sanitory=[0]*4
cnt=0
for i in range(3):
    if symptom[i]=="Y" and temperature[i]>=37:
        sanitory[0]+=1
        cnt+=1
    elif symptom[i]=="N" and temperature[i]>=37:
        sanitory[1]+=1
    elif symptom[i]=="Y" and temperature[i]<37:
        sanitory[2]+=1
    else:
        sanitory[3]+=1
for i in range(4):
    print(sanitory[i],end=" ")
    
if sanitory[0]>=2:
    print("E")