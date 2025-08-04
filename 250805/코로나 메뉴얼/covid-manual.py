s1,t1=input().split()
s2,t2=input().split()
s3,t3=input().split()
t1=int(t1)
t2=int(t2)
t3=int(t3)
a=0
if s1=="Y" and t1>=37:
    a+=1
if s2=="Y" and t2>=37:
    a+=1
if s3=="Y" and t3>=37:
    a+=1
if a>=2:
    print("E")
else:
    print("N")