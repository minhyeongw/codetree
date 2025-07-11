string=list(input())
string[1]='a'
string[-2]='a'
for i in range(len(string)):
    print(string[i],end="")