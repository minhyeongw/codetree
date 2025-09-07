arr=list(map(int, input().split()))
even_arr=arr[1::2]
sum_even=sum(even_arr)
mul3_arr=arr[2::3]
sum_mul3=sum(mul3_arr)
print(sum_even,end=" ")
print(f"{sum_mul3/3:.1f}")