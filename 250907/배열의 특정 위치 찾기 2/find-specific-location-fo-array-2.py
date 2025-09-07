arr=list(map(int, input().split()))
even_arr=arr[::2]
odd_arr=arr[1::2]
sum_even=sum(even_arr)
sum_odd=sum(odd_arr)
if sum_even>sum_odd:
    print(sum_even-sum_odd)
else:
    print(sum_odd-sum_even)