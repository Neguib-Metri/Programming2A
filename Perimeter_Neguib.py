#/*Neguib Metri DATOS 2°A*/ //Python CODE//
# Excercise Number 3; Write a program that computes the perimeter of a polygon. It should read pairs of x and y values until the user enter a blank line for the x-coordinate. Then, it should display the total perimeter.

from math import sqrt #Import sqrt from math library we used the sqrt. 

print("This program will measure the perimeter of a polygon")
perimeter = 0
cdnts = set()
x0 = input("Enter the abscissa: ")
y0 = input("Enter the ordinate: ")
cdnts.add((x0, y0)) #it will use the form of cordinates
xn, yn = x0, y0
# the lopp if for the user to introduce or input coordinates until the blank space is detected.
while True:
    try:
        x1 = input("Enter the abscissa (Blank Space to finish the program): ")
        if x1 == '':
            x1 = x0
            break
        y1 = input("Enter the ordinate (Blank Space to finish the program): ") #whenever the user press enter to input a blank space the program break the loop 
        if y1 == '':
            y1 = y0
            break
        else: #after that it calculate the perimeter of the polygon that the user introduce previously. 
            DistanceBetweenDots = sqrt((float(x1) - float(x0))**2+(float(y1) - float(y0))**2) #the fuction that calculate the perimeter (distance between dots)
            perimeter += DistanceBetweenDots
            cdnts.add((x1, y1))
            x0, y0 = x1, y1 

    except ValueError:
        pass

DistanceBetweenDots = sqrt((float(x1) - float(xn))**2+(float(y1) - float(yn))**2) #I display the result.  
perimeter += DistanceBetweenDots #I will output the perimiter of the polygon
print("Perimeter of the polygon with the coordinates {0} is {1:.3f}.".format(cdnts, perimeter))#finally I display the coordinates of the polygon in coordinates format and the result of the perimeter.
