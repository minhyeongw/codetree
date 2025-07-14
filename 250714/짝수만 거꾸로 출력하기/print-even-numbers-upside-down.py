n=int(input())
ol=list(map(int,input().split()))
ol.reverse()
for i in ol:
    if i%2==0:
        print(i,end=" ")