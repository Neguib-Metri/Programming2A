#THOSE LINE HAS NOT TO APPEAR IN THE OUTCOME FILE 
#Neguib Metri DATOS 2°A //Python CODE// 
#Write a program called "matrixop.c" or "matrixop.py" that can do the following (26 points):
#a. Read two matrix from the files: matrix1.dat and matrix2.dat
#b. Store it into two variables (arrays).
#c. Complete the following operations:
  #1. Sum.
  #2. Subtraction.
  #3. Matrix Product.
#d. Save each resultant matrix into a file: sum.dat, subtraction.dat, hadamard.dat and matrixproduct.dat

# we import numpy in order to load the documents as an array in python and to make it easy the operations between the matrixA and matrixB 
import numpy as np #As I mentioned in the code we´re going to ingnore the comment character after 3 characters so this line has to apper in the new File.py with the name of your choose.
#Print text for user
print("This is the Matrix A :\n") 
 #I load the first matrix from the document call mat1.txt
matrixA=np.loadtxt('matrix1.dat',skiprows=0) 
#thefore I print the matrix itself
print(matrixA) 
#Make and space between
print()
#Print text for user
print("This is the Matrix B :\n") #So this was something fun Professor I hope you have a good day.  
#I load the second matrix from the file mat2.txt
matrixB=np.loadtxt('matrix2.dat',skiprows=0) 
#I print the second matrix itself
print(matrixB) 
#Making a space between
print() #This was a python code created by a student of UPY
#Therfore I start to make the operations between the matrix A and B so i will started