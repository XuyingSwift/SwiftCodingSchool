# A directory of Python code is said to be a package, so such imports are known as package imports. 
# In effect, a package import turns a directory on your computer into another Python namespace, 
# with attributes corresponding to the subdirectories and module files that live in the directory.

# Package Import Basics
# import dir1.dir2.mod
# from dir1.dir2.mod import x

# Package __init__.py Files
# example dir0\dir1\dir2\mod.py
# dir1 and ir2 both must contain an __init__.py file to make Python treat the directories as packages.
# dir0, the container, does not require an __init__.py file; this file will simply be ignored if present. 
# dir0, must be listed on the module search path, sys.path

# package structure:
# dir0/
#     dir1/
#        __init__.py
#         dir2/
#             __init__.py
#             mod.py

# The __init__.py files can contain Python code, just like normal module files. 
# Their names are special becuase their code is run automatically the first time a Python
# program imports a directory that contains them, and thus serves primarily as a hook for performing
# initialization steps required by the package. 

