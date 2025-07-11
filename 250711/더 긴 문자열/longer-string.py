first,second=map(str,input().split())
f=len(first)
s=len(second)
if f>s:
    print(first,f,sep=" ")
elif s>f:
    print(second,s,sep=" ")
else:
    print("same")