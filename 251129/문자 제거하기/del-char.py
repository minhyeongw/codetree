a=input()
arr=list(a)
while len(arr)>1:
    n=int(input())
    if n<len(arr):
        arr.pop(n)
        print(''.join(arr))
    else:
        arr.pop(-1)
        print(''.join(arr))
