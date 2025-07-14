
cnt3=0
cnt5=0
for i in range(10):
    number=int(input())
    if number%3==0:
        cnt3+=1
    if number%5==0:
        cnt5+=1
print(cnt3,cnt5)