# find two numbers that add up to k
def navie(lst, k):
    result = []
    
    for i in range(len(lst)):
        comp = k - lst[i]
        for j in range(1, len(lst)):
            if lst[j] == comp:
                result.append(lst[i])
                result.append(lst[j])
                return result

def two_pointer(lst, k):
    lst.sort()
    start = 0
    end = len(lst) -1 
    while (start < end):
        if lst[start] + lst[end] == k:
            return [lst[start], lst[end]]
        elif lst[start] + lst[end] < k:
            start += 1
        else:
            end -= 1

lst = [1,2,3,4,5]
k = 9

print(navie(lst, k))
print(two_pointer(lst, k))
