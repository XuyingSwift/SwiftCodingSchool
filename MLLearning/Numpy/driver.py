import numpy as np

# 0-D array with value 42
arr1 = np.array(42)
print(arr1)
print(type(arr1))

#1-D array with
arr2 = np.array([1,2,3,4,5])
print(arr2)
print(type(arr2))

#2-D array with
arr3 = np.array([[1,2,3,4,5], [6,7,8,9,10]])
print(arr3)
print(type(arr3))

#3-D array with
arr4 = np.array([[1,2,3,4,5], [6,7,8,9,10], [11,12,13,14,15]])
print(arr4)
print(type(arr4))

# print out their demin
print(arr1.ndim)
print(arr2.ndim)
print(arr3.ndim)
print(arr4.ndim)