S = '' # Empty string
S = "spam's" # Double quotes, same as single
S = 's\np\ta\x00m' # Escape sequences
# \n -> newline, \t -> tab, \x00 -> null byte
S = """...multiline...""" # Triple-quoted block strings
S = r'\temp' # Raw strings (no escapes) The raw string does not treat backslashes as escape characters

S1 = 'hello'
S2 = 'world'
S1 + S2 # Concatenation
S1 * 8 # Repetition
S1[0] # Indexing, zero-based
S1[1:3] # Slicing, 1 is included, 3 is excluded
len(S1) # Length
S1[-1] # Negative indexing, count from the right
S1.find('o') # Search from the left
S1.rstrip() # Remove whitespace characters on the right side
S1.replace('l','L') # Replace occurrences of a substring with another
S1.split(',') # Split on delimiter into a list of substrings
S1.isdigit() # Content test: is digit characters
S1.lower() # Case conversions
S1.endswith('spam') # End test
S.encode('latin-1') # Unicode encoding
S.encode('utf8') # Unicode decoding
"spam %s, eggs, and %s" % ('hello', 'world') # string formatting expression
"spam {0}, eggs, and {1}".format('hello', 'world') # string formatting method

for x in S : print(x) # Iterate over one character at a time
'spam' in S # Membership: substring check
[c * 2 for c in S] # List comperhension to double every character
map(ord, S) # map ord over all characters in S
#List(S) # List of all characters in S

s = 'spam'
print(s[0],s[-2]) # indexing from the front or end
print(s[1:3], s[1:], s[:-1]) # slicing: extract a section

s = 'abcdefghijklmnop'
print(s[1:10:2]) # will fetch every other item in s from offsets 1-9 
print(s[::2]) # will fetch every other item from the beginning to the end of the sequence

print(int("23")) # convert from string to int
print(str(23)) # convert int to string

print(ord('s')) # conver a single character its underlying integer code
print(chr(115)) # convert an interge code to the corresponding character

S = S + 'SPAM' # To change a string, make a new string
print(S)
S = S[:4] + 'Burger' + S[-1]
print(S)

print('That is %d %s bird!' % (1, 'dead'))
print('That is {0} {1} bird'.format(1, 'dead')) 

str1 = 'Monatana'
print(str1.replace('on', '99999'))
print(str1.find('M'))

L = list(str1)
print(L)
print(L[2])
print(L[3])

S = '.....'.join(L)
print(S)

print('Spam'.join(['eggs', 'sausage', 'ham']))

line = 'aaa bbb ccc'
cols = line.split()
print(cols)

print('%(qty)d more %(food)s' % {'qty': 1, 'food': 'spam'})

print('%.2f' % 1.2345)
print('%.2f %s' % (1.234565, 99))

print('{0:.2f}'.format(1.2345))