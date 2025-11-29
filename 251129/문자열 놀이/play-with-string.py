s,q=input().split()
q=int(q)
for i in range(q):
    a,b,c=input().split()
    if a=="1":
        arr=list(s)
        b=int(b)
        c=int(c)
        sep=arr[c-1]
        arr[c-1]=arr[b-1]
        arr[b-1]=sep
        s=''.join(arr)
        print(s)
    else:
        arr=list(s)
        for j in range(len(s)):
            if arr[j]==b:
                arr[j]=c
        s="".join(arr)
        print(s)