#/*Neguib Metri DATOS 2°A*/ //Python CODE//
#// Excercise Number 1; Create a program that uses random number generator to simulate flipping a coin several times. The simulated coin should be fair, meaning that the probability of heads is equal to the probability of tails. Your program should flip simulated coins until either 3 consecutive heads of 3 consecutive tails occur. Display an H each time the outcome is heads, and a T each time the outcome is tails, with all of the outcomes shown on the same line. Then display the number of flips needed to reach 3 consecutive flips with the same outcome. When your program is run it should perform the simulation 10 times and report the average number of flips needed.//

import random as rand #We import the library as Rand

M = int(input("Introduce the number of Flips you want to simulate: ")) #We initialize the variables and ask the user for a number of simulates.
Sum = 0
Average3inRow = 0
for neg in range(M): #after that whe define the loop to found whenever a Head or a Tail is flipped 3 times in a row. 
    row = 0
    flips = 0
    outcome = ""
    while row != 3: #as you can see it check if there are 3 in a row
        toss = rand.randint(0,1)
        if toss == 1:
            toss = " H "
        else:
            toss = " T "

        if flips == 0: #then we add +1 for every tail or head that flipped
            outcome = toss
            row += 1
        else:
            if outcome == toss:
                row += 1
            else:
                pass
                row = 1
                outcome = toss
        print(toss, end="") 
        flips += 1
    print("({} Total Flips to reach 3 in a row)".format(flips)) #finally we print the number of flips
    Sum += flips 
    Average3inRow = Sum / M

#Also at the end we print the averge needed to reach the 3 in a row
print("The average number of flips needed to reach the 3 flipes in a row:", Average3inRow)
  