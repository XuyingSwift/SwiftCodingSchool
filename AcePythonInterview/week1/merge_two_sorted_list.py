# implement a function that merges two sorted lists of m and n elements into another sorted list
list1 = [1,3,4,5]
list2 = [2,6,7,8]

merged_list = []

# step 1: loop throught two list, compine them

def merge_two_sorted_list(list1, list2):
    merged_list = list1 + list2
    merged_list.sort()
    return merged_list

def two_pointer_merge_two_sorted_list(list1, list2):
    # because lists are sorted, then we don't need to nested loop
    # initialize pointers: start with two pointers, each pointing to the beginning of the list
    i, j = 0, 0 
    merged_list = []
    # compare and merge: compare the elements at these pointers. 
    # add the smaller element to the new list and move the corresponding pointer to the next element in its list
    while i < len(list1) and j < len(list2):
        # compare the items and add smaller
        if list1[i] < list2[j]:
            merged_list.append(list1[i])
            i +=1
        else:
            merged_list.append(list2[j])
            j += 1
    # Once you reach the end of one list, append the remainining elements of the other list, as they are already sorted.
    # add remaining elements from the list1 or list2
    print("i: ", i)
    while i < len(list1):
        merged_list.append(list1[i])
        i += 1
    while j < len(list2):
        merged_list.append(list2[j])
        j += 1
    return merged_list


print(merge_two_sorted_list(list1, list2))

ls1 = [1,3,5,7]
ls2 = [2,4,6,8,10,12]
print(two_pointer_merge_two_sorted_list(ls1, ls2))

def merge_lists(ls1, ls2):
    # using two pointer method, uses two pointers to traverse the data structure, usually in one pass, to achieve the desired result. 
    # two pointers can move towards each other, away from each other, or in the same direction.

    # created two pointers for list1 and list2
    merged_list = []
    i = 0
    j = 0

    # compare and merge list
    while i < len(ls1) and j < len(ls2):
        if ls1[i] < ls2[j]:
            merged_list.append(ls1[i])
            i += 1
        else:
            merged_list.append(ls2[j])
            j += 1

    # after this compare, i or j will be the length of their list
    while i < len(ls1):
        merged_list.append(ls1[i])
        i += 1
    while j < len(ls2):
        merged_list.append(ls2[j])
        j += 1

    return merged_list

ls1 = [1,3,5,7,9,11]
ls2 = [2,4,6,8,10]

print(merge_lists(ls1, ls2))
