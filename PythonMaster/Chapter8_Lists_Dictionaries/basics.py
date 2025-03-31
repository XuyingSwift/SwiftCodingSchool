# Lists
# 1: Ordered collections of arbitrary objects
# 2: Accessed by offsets
# 3: Variable-length, heterogeneous, and arbitrarily nestable.
# 4: Of the category "mutable sequence"
# 5 Arrays of object references

L = [] # an empty list
print('An empty list: ', L)

L = [123, 'abc', 1.23, {}] 
print('Four items:', L)

L = ['Bob', 10.01, ['dev', 'mgr']]
print('Nested sublits: ', L)

L = list('spam')
print("List of an iterable's items, list of successive", L)