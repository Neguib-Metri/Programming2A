#Neguib Metri DATOS 2°A //Python CODE// 
#Write a program called "matrixop.c" or "matrixop.py" that can do the following (26 points):
#a. Read two matrix from the files: matrix1.dat and matrix2.dat
#b. Store it into two variables (arrays).
#c. Complete the following operations:
  #1. Sum.
  #2. Subtraction.
  #3. Matrix Product.
#d. Save each resultant matrix into a file: sum.dat, subtraction.dat, hadamard.dat and matrixproduct.dat

import numpy as np # we import numpy in order to load the documents as an array in python and to make it easy the operations between the matrixA and matrixB 
print("This is the Matrix A :\n") #Print text for user
matrixA=np.loadtxt('matrix1.dat',skiprows=0) #I load the first matrix from the document call mat1.txt
print(matrixA) #thefore I print the matrix itself
print() #Make and space between
print("This is the Matrix B :\n") #Print text for user
matrixB=np.loadtxt('matrix2.dat',skiprows=0) #I load the second matrix from the file mat2.txt
print(matrixB) #I print the second matrix itself
print() #Making a space between

#Therfore I start to make the operations between the matrix A and B so i will started

add = matrixA + matrixB  #As always I start with the first operation the addition
print("This is the Addition of Matrix A + Matrix B:\n")
print(add) #I put on the screen a messenge of the sum
a=np.array2string(add, precision=2, separator=',', 
suppress_small=True)  #However I need to convert the Array to and string in order to perform the impresion of the sum,so I used the fuction array2string and y open my file to save and print at the same time in the new document called addmatrix.txt the result that I obtained previously.
with open("addmatrix.txt",'w+') as add:
 add.write("This is the Sum of the matrix A + Matrix B:\n")
 add.write(a) #So here I write in the document
print() #Making and space
# Then I go to the 2nd operation the susbstraction
substraction = matrixA - matrixB
print("This is the Substration of Matrix A - Matrix B:\n")
print(substraction)
b=np.array2string(substraction, precision=2, separator=',', 
suppress_small=True) #However I need to convert the Array to and string in order to save the result after the operation, so I used the fuction array2string and y open my file to save and print and at the same time in the new document called substraction.txt the result that I obtained previously.
with open("substractionmatrix.txt",'w+') as subs:
 subs.write("This is the Subs of the matrix A - Matrix B: \n")
 subs.write(b) #Here I print in the document
print() #Making a space
#finally it goes to the multiplication of the MatrixA*MatrixB 
mult = np.matmul(matrixA,matrixB) #So I perform the operation of the numpy library to make it easy the cross multiplication 
print("This is the Multiplication of the matrix A * Matrix B: \n") #Print for the user
print(mult) #print the multiplication
c=np.array2string(mult, precision=2, separator=',', 
suppress_small=True) #However I need to convert the Array to and string in order to save the result after the operation, so I used the fuction array2string and y open my file to save and print and at the same time in the new document called multiplication.txt the result that I obtained previously.
with open("multiplicationmatrix.txt",'w+') as multi: 
 multi.write("This is the Multiplication of the matrix A * Matrix B: \n")#Print the first line of text
 multi.write(c) #then I write the operation so it'll be printed in the new document 
print() 
#Neguipo Extemporary Unit 3