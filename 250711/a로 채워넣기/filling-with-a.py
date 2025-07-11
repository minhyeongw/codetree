string=input()
new_string=string.replace(string[1],'a',1)
final_string=new_string.replace(new_string[-2],'a',1)
print(final_string)