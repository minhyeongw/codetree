arr=[]
for i in range(10):
    st=input()
    arr.append(st)
fin=input()
count=0
for i in range(10):
    if arr[i][-1:]==fin:
        print(arr[i])
        count+=1
if count==0:
    print("None")