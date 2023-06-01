def insertionSort(arr):
    n = len(arr)
    if n <= 1:
        return
    for i in range(1, n):
        current = arr[i]
        j = i -1
        while j >= 0 and current < arr[j]:
            arr[j + 1] = arr[j]
            j = j -1
        arr[j+1] = current
arr = [12, 11, 5, 6, 10]
insertionSort(arr)
print(arr)  
        
        