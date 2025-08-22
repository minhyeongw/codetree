n=int(input())
a=1
while a<=n:
    if a%3==0 or (a//10==3) or a//10==6 or a//10==9 or a%10==3 or a%10==6 or a%10==9:
        print(0,end=" ")
    else:
        print(a,end=" ")
    a+=1