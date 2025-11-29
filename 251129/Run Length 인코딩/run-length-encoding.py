A = input()

# Please write your code here.
encoded=""
curr_char=A[0]
num_char=1
for i in A[1:]:
    if i==curr_char:
        num_char+=1
    else:
        encoded+=curr_char
        encoded+=str(num_char)
        curr_char=i
        num_char=1

encoded+=curr_char
encoded+=str(num_char)

print(len(encoded))
print(encoded)