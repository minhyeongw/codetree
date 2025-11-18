import sys
n1, n2=map(int, input().split())
arra=list(map(int, input().split()))
arrb=list(map(int, input().split()))
for i in range(n1):
    success = True

    for j in range(n2):
        if i+j >=n1:
            success = False
            break

        if arra[i+j] != arrb[j]:
            success=False
            break
        
    if success:
        print("Yes")
        sys.exit()

print("No")