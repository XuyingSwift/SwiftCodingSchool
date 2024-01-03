a = ["a", "apple", 23, 3.14]
empty = []
sequence_lsit = list(range(10))
print(a)
print(empty)
print(sequence_lsit)

a_list = [2, 'Educative', 'A']
def foo():
    print('Hello from foo()')
another_list = [a_list, 'python', foo, ['yet another list']]
print(another_list[0], another_list[0][1], another_list[1], another_list[3])

# you can also invoke the function inside a list
another_list[2]()

another_list.append("My new life")
print(another_list)
another_list.insert(0, 2) # insert 2 at index 0
print(another_list)
another_list.remove('python')
print(another_list)
another_list.pop(2) # pop the item at index 2
print(another_list)
b = [1,2,3,4]
b.reverse()
print(b)


c = list(range(20))
print(c)
print(c[0:4])


print("doing slicing right now")

print(c[:])
print(c[10:])
print(c[10:15])
print(c[:15])

# list[start:stop:step]
print(c[0:10:3])

x = list(range(5))
print(x)
x[1:4] = [45, 21, 83]
print(x)

del x[3:4]
print(x)

print(x[-4])

my_string = "somehow"
string1 = my_string[:4]
string2 = my_string[4:]

print(string1, string2)
