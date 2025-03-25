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

# import Chapter22_25_Modules.Chapter22.Chapter22_Modules as Chapter22_Modules

# def main():
#     Chapter22_Modules.printer('Hello World')

# if __name__ == '__main__': main()

import Chapter22.Chapter22_Modules as Chapter22_Modules

def main():
    Chapter22_Modules.printer('Hello World')

if __name__ == '__main__': main()


