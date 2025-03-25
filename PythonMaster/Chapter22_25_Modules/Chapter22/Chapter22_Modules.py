# Python Module -- the hightest level of program organization unit, which packages code for reuse. 
# It provides self-contained names[aces that minimize variable name clashes across your porgrams.
# Each module is a separate file that can be imported into other files.
# Modules provide an easy way to orgnaize components into a system by serving as self-contained packages of variables known as namespaces.
# All the names defined at the top level of a module file become attributes of the imported module object. 

# 1: Code reuse
# 2: System namespace partitioning
# 3: Implementing shared services or data.

# Python program architecture
# Objects defined by a module are crated at runtime, as import is executing: import literally runs statements in the target file one at a time to 
# create its contents. Along the way, every name assigned at the top level of the file becomes an attribute of the module, accessible to importers.

# How imports work?
# They are really runtime operations that perform three distinct steps:
# 1: Find the module's file
# 2: Compile it to byte code (if needed)
# 3: Run the module's code to build the objects it defines.

def __init__(self):
    pass

def printer(x): # Module attribute
    print(x)

# Module Usage
# 1 : The import statement
## The import statement simply lists one or more module names of modules to load,
## separated by commas. Because it gives a name that refers to the whole module object,
## we must go through the module name to fetch its attributes.

# 2 : The from statement
## from  copies specific names from a module to the importer's scope, it allows us to 
## use the copied names diretly without going through the module's name. 

# 3 : The from * statement 
## When we use a * iunstead of specific names, we get copies of all names assigned at the top level of the module.

# Imports Happen Only Once. Import and from are executable statements, not compile-time declarations.
# import and from are implicit assignments: 
# import assigns an entire module object to a single name.
# from assigns one or more names to objects of the same names in anohter module.

# Namespaces Dictionaries: __dict__ attribute of a module object is a dictionary that maps names to objects. 

