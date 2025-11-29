a=input()
arr=list(a)
fir=arr[0]
sec=arr[1]
for i in range(len(a)):
    if arr[i]==sec:
        arr[i]=fir
a="".join(arr)
print(a)