#NEGUIB METRI DATOS 2°A 
#THIS IS THE PROJECT OF THE UNIT 4 "Create a Game or a program with all the techniques you learnt from the course"
#REFERENCES : 
# BASIC THEORY OF TURTLE LIBRARY: https://realpython.com/beginners-guide-python-turtle/ 
# Source code: https://github.com/Its-Triggy/PongEvolution/blob/master/pongEvolution.py original advance code with AI
# Source code: https://github.com/clear-code-projects/Pong_in_Pygame another example with pygame https://www.youtube.com/watch?v=Qf3-aDXG8q4  
# BASIC TUTORIAL OF TURTLE LIBRARY: https://www.youtube.com/watch?v=PTgyzZGknvg&list=PLlEgNdBJEO-n8FdWb-7f_C4dFC07IY9tb

'''Principal Changes: I used Turtule Library instead pygame
a program a display for the results of the goals that you succesfully reach when the pong reach de X axis as a eplain in my program the basic used of turtle was needed to perform this game and so on....'''
#First of all we're going to introduce the library turtle that is for basic graphics and also it's for begginers and don't need to download another progrmas or files

import turtle

# This is the screen that we're going to use and it's where the game is going to be display
OnScreen = turtle.Screen()               
# Now I'm going to put a name for the screen I created.
OnScreen.title("WELCOME TO PONG GAME by Neguib Metri")              
# Color of the window
OnScreen.bgcolor("blue")                
# Size of the window 
OnScreen.setup(width=900, height=700)    
# Stops the refresh of the game. 
OnScreen.tracer(0)                       

#We start with the Scores on 0 for each player
# Score counter of Player A
score_a = 0  
# Score counter of Player B
score_b = 0  

#Paddle A 
paddle_a = turtle.Turtle()                        
#Speed of animation to maximum
paddle_a.speed(0)         
#Shape                      
paddle_a.shape("square")  
#Color                       
paddle_a.color("white")
#Size                           
paddle_a.shapesize(stretch_wid=5, stretch_len=1)  
#In order to draw any trayectory line on the screen
paddle_a.penup()    
#Located in (-350,0)                              
paddle_a.goto(-350, 0) #located in the left side of the window                     

#Paddle B
paddle_b = turtle.Turtle()                        
# Speed of animation to maximum
paddle_b.speed(0)     
#Shape                          
paddle_b.shape("square")  
#Color                        
paddle_b.color("white")         
#Size                
paddle_b.shapesize(stretch_wid=5, stretch_len=1)  
#In order to draw any trayectory line on the screen
paddle_b.penup()       
#Located in (350,0) located in the right side of the window                   
paddle_b.goto(350, 0)                             

# Now we go to the PONG
#Ball is a turtle object
ball = turtle.Turtle()    
#Speed of Animation to maximum                        
ball.speed(0)
#Shape                                   
ball.shape("square")   
#Color                         
ball.color("white")                               
##In order to draw any trayectory line on the screen
ball.penup()   
#Located in (0,0)                                  
ball.goto(0, 0)                                   
#Ball's X inicial speed
ball.dx = 0.30                                   
#Ball's Y inicial speed
ball.dy = 0.30                                   

#PEN                                  
pen = turtle.Turtle()   
# Speed of Animation to maximum                      
pen.speed(0)      
#Color                               
pen.color("white") 
#In order to draw any trayectory line on the screen     
pen.penup()     
# Make the turtle invisible                                  
pen.hideturtle()
# Located in (0,260)                                  
pen.goto(0,260) 
# Content of the Pen showed on screen                                 
pen.write("Player 1: {}    Player 2: {}".format(score_a, score_b), align="center", font=("Time New Roman", 30, "normal"))
                                                  
# Paddle A up movement
def paddle_a_up():                
    y = paddle_a.ycor()
    y += 30
    paddle_a.sety(y) 
    if(paddle_a.ycor()>250): # If structure avoid that the Paddle left the screen 
        paddle_a.sety(250)

# Paddle A down movement    
def paddle_a_down():                  
    y = paddle_a.ycor()
    y -= 30
    paddle_a.sety(y)
    if(paddle_a.ycor()<-250): # If structure avoid that the Paddle left the screen 
        paddle_a.sety(-250)

# Paddle B up movement    
def paddle_b_up():
    y = paddle_b.ycor()
    y += 30
    paddle_b.sety(y)
    if(paddle_b.ycor()>250): # If structure avoid that the Paddle left the screen
        paddle_b.sety(250)

# Paddle B down movement   
def paddle_b_down():
    y = paddle_b.ycor()
    y -= 30
    paddle_b.sety(y)
    if(paddle_b.ycor()<-250): # If structure avoid that the Paddle left the screen
        paddle_b.sety(-250)
        
#Players control options
OnScreen.listen()                           
#paddle_a_up when press w 
OnScreen.onkeypress(paddle_a_up, "w")       
#¿method paddle_a_down when press s 
OnScreen.onkeypress(paddle_a_down, "s")    
#paddle_b_up when press Up 
OnScreen.onkeypress(paddle_b_up, "Up")      
#paddle_b_down when press Down 
OnScreen.onkeypress(paddle_b_down, "Down")  

# Now its time to make the principal loop of the game
while True:
    #In fact this is the function that refresh the screen
    OnScreen.update()     
    
#The pong movement on the screen
    # Movement on X axis
    ball.setx(ball.xcor() + ball.dx)     
    # Movement on Y axis 
    ball.sety(ball.ycor() + ball.dy)    
    
#The pong border limitation 
    # Axis Y, when the ball hits the top of the screen, then it bounces straigh forward to the bottom. 
    if ball.ycor() > 290:   
        ball.sety(290)
        ball.dy *= -1
    #Axis Y if the ball hits the end of the screen, then it bounces up
    if ball.ycor() < -290: 
        ball.sety(-290)
        ball.dy *= -1

    #This is where the user win points because once the ball reach the X axis you win 1 point    
    # Axis X, # Whether the pong reachs the X axis of the oppnent you win +1 point
    if ball.xcor() > 390: 
        ball.goto(0,0)
        ball.dx *= -1
        score_a += 1
        pen.clear()
        pen.write("Player 1 has: {} Points   Player 2 has: {} Points".format(score_a, score_b), align="center", font=("Time New Roman", 30, "normal"))
        
    if ball.xcor() < -390: # Whether the pong reachs the X axis of the oppnent you win +1 point
        ball.goto(0,0)
        ball.dx *= -1
        score_b += 1
        pen.clear()
        pen.write("Player 1 has: {} Points   Player 2 has: {} Points".format(score_a, score_b), align="center", font=("Time New Roman", 30, "normal"))
    
    # Paddle A and ball collisions
    # Whether the ball (pong) reachs a pad and produces a collision the ball goes in the oposite direction
    if(ball.xcor() < -340 and ball.xcor() > -350) and (ball.ycor() < paddle_a.ycor() + 40 and ball.ycor() > paddle_a.ycor() -40):
        ball.setx(-340)
        ball.dx *= -1

        # Paddle B and ball collisions
    # Whether the ball (pong) reachs a pad and produces a collision the ball goes in the oposite direction
    if(ball.xcor() > 340 and ball.xcor() < 350) and (ball.ycor() < paddle_b.ycor() + 40 and ball.ycor() > paddle_b.ycor() -40):
        ball.setx(340)
        ball.dx *= -1