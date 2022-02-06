import numpy as np

my_array = np.array([1, 2, 3, 4, 5])
# vectorized operation
vectorized_multiplication = my_array * 10
print(vectorized_multiplication)  # [10, 20, 30, 40, 50]

# non or unvectorized operation
tmp_array = [10, 20, 30, 40, 50]
result_array = []
for i in tmp_array:
    result_array.append(i//10)

print(result_array)  # [1,2,3,4,5]
