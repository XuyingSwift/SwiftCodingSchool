# write a function that reverses a string. The input string is given as an array of charcters s. 
# you must do this by modifying the input array in-place with 0(1) extra memory.
# in-place: without extra space proportional to the input size. 

def reverseString(s):
    right = len(s) - 1 
    left = 0
    temp = ''
    while (left < right):
        temp = s[left]
        s[left] = s[right]
        s[right] = temp
        left = left + 1
        right = right - 1

def reverseString1(s):
    left = 0
    right = len(s) - 1
    while (left < right):
        # swap characters
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1

def reverseString2(s):
    return s[::-1] # step through the list one by one from the right
    # s[start:end:step]

def reverseString3(s):
    s.reverse()

def main ():
    input1 = ['h', 'e', 'l', 'l', 'o']
    input2 = ['H', 'a', 'n', 'n', 'a', 'h']
    reverseString(input1)
    reverseString(input2)
    print(input1)
    print(input2)

    reverseString1(input1)
    reverseString1(input2)
    print(input1)
    print(input2)

    i1 = reverseString2(input1)
    i2 = reverseString2(input2)
    print(i1)
    print(i2)

    reverseString3(input1)
    reverseString3(input2)
    print(input1)
    print(input2)
main()
