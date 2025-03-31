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
S1.replacce('l','L') # Replace occurrences of a substring with another
S1.split(',') # Split on delimiter into a list of substrings
S1.isdigit() # Content test: is digit characters
S1.lower() # Case conversions
S1.endswith('spam') # End test
S.encode('latin-1') # Unicode encoding
S.decode('utf8') # Unicode decoding
"spam %s, eggs, and %s" % ('hello', 'world') # string formatting expression
"spam {0}, eggs, and {1}".format('hello', 'world') # string formatting method

for x in S : print(x) # Iterate over one character at a time
'spam' in S # Membership: substring check
[c * 2 for c in S] # List comperhension to double every character
map(ord, S) # map ord over all characters in S
#List(S) # List of all characters in S
