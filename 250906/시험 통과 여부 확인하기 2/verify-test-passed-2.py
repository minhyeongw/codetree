n=int(input())
pass_students=0
for i in range(n):
    exam=list(map(int, input().split()))
    sum_exam=sum(exam)
    if sum_exam/4>=60:
        pass_students+=1
        print("pass")
    else:
        print("fail")
print(pass_students)