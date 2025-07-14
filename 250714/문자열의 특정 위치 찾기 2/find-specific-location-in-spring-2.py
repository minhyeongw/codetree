string=["apple","banana","grape","blueberry","orange"]
c=input()
cnt=0
for i in string:
    if i[2]==c or i[3]==c:
        print(i)
        cnt+=1
print(cnt)