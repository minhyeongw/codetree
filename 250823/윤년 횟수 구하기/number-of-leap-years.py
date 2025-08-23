n=int(input())
ny=0
for i in range(1,n+1):
    if i%4!=0 or (i%100==0 and i%400!=0):
        ny+=1
print(n-ny)