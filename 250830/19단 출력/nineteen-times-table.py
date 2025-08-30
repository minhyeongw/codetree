for i in range(19):
    for j in range(19):
        if (j+1)%2==0:
            print(f"{i+1} * {j+1} = {(i+1)*(j+1)}",end="\n")
        elif j+1==19:
            print(f"{i+1} * {j+1} = {(i+1)*(j+1)}")
        else:
            print(f"{i+1} * {j+1} = {(i+1)*(j+1)}",end=" / ")