n=int(input())
number=0
for i in range(1,101):
    number+=i
    if number>=n:
        print(i)
        break
    