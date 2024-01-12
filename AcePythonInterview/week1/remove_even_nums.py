# remove the even numbers in an array
# step 1. create a new list to save the numbers that are not even
# step 2: loop through the array find not even numbers
def remove_even_number(arr):
    new_arr = []
    for i in arr:
        if (i%2 !=0):
            new_arr.append(i)

    return new_arr

print(remove_even_number([1,2,3,4]))
lst = [1,2,3,4]
new_list = [num for num in lst if num %2 != 0]
print(new_list)
