#/*Neguib Metri DATOS 2°A*/ //Python CODE//
# Excercise Number 2; Write a program that reads an integer from the user, If the value entered by the user is less than 2 then your program should display an appropriate error message. Otherwise, your program should display the prime numbers that can be multiplied together to compute n, with one factor appearing on each line.//

NumNeg = int(input("Enter a Number to obtaine the Prime Factor:  ")) #We initialize the variables and ask the user to introduce a integer for the prime factor
Factors = [] #we're going to storage the prime factors in order to printed out at the end

while NumNeg % 2 == 0: #We verify the integer
    Factors.append(2)
    NumNeg //= 2

Div = 3 
while NumNeg != 1 and Div <= NumNeg: #if the integer is acceptable we start to use the formula to obtaine all the factors.
    if NumNeg % Div == 0:
        Factors.append(Div) 
        NumNeg //= Div
    else: 
        #prime number is odd except 2. however when we put #1 the code do not obtained the prime factor.
        divisor +=2

print("The Factors of the the number you introduce are: ") #finally we print out the factors of the integer that the user puts on the code.
for m in range(len(Factors)): #we check all the factors previously storaged 
    print(Factors[m], end="  ") #we put them on the screen
