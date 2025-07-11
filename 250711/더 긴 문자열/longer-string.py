first=input()
second=input()
f=first.count()
s=second.count()
if f>s:
    print(first,f,sep=" ")
elif s>f:
    print(second,s,sep=" ")
else:
    print("same")