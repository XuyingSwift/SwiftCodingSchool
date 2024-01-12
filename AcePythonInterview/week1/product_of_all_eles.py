# Implement a function, find_product(lst), which modifies a list so that 
# each index has a product of all the numbers present in the list except the number stored at that index.

def products(lst):
    sum = 0
    for i in range(len(lst)):
        sum *= lst[i]
    result = []
    for i in range(len(lst)):
        if lst[i] == 0:
            result.append(0)
        else:
            result.append(sum / lst[i])
    return result

lst = [1,2,3,4]
ex = [24, 12, 8, 6]
print(lst)

def find_products(arr):
    # We use a single array - product to store the cumulative product of all the
    # elements to the left of each element in the original list
    # then we traverse the list again, this time from right to left,
    # and multiply each element in the product arry bu a runing product of 
    # elements to the right of each element in the original list.
    n = len(arr)
    if n == 0 or n == 1:
        return []

    product = [None] * n

    # Initialize the product array with 1
    temp = 1
    #for each i, product[i] is set to the current value of temp (which is the product of all elements to the left of i)
    for i in range(n):
        product[i] = temp
        print("product i: ", product[i])
        temp *= arr[i] # then temp is multiplied by arr[i] updating the running product
        print("The product of all elements to the left of i: ", temp)
    print("++++++++++++++++++++++++++++++++++++++++++++++++")
    # reset temp to 1
    temp = 1
    # start from the end of the list
    # multiply each product[i] with temp, which now represents the product of all elements to the right i
    for j in range(n-1, -1, -1):
        product[j] *= temp
        print("product i: ", product[j])
        temp *= arr[j]
        print("The product of all elements to the right of i: ", temp)

    return product


lst = [1,2,3,4]
print(find_products(lst))

