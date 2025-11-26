arr=["apple","banana","grape","blueberry","orange"]
fi=input()
count=0
for i in range(len(arr)):
    if arr[i][3]==fi or arr[i][2]==fi:
        print(arr[i])
        count+=1
print(count)