gi=input()
find=input()

count=0
for i in range(len(gi)):
    if gi[i]==find:
        count+=1
print(count)