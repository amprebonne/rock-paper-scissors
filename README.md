# rock-paper-scissors

# The Game
Rock Paper Scissor application just using basic C knowledge like if-else statements, random value generation, and input-output of values.
Rock Paper Scissor (which is also called Stone Paper Scissor) is a hand game and played between two people, in which each player simultaneously forms one of three shapes. The winner of the game is decided as per the below rules:

# Rules
Rock vs Paper -> Paper wins.
Rock vs Scissor -> Rock wins.
Paper vs Scissor -> Scissor wins.
In this game, the user will be asked to make choice and according to the choice of user and computer and then the result will be displayed along with the choices of both computer and user.

# Brief code documentation
It consists of the declaration of the variables.
printf() and scanf() functions for displaying the content and taking input from the user. 
It also contains  two predefined functions:srand() and rand() which are used to generate random numbers in the range [0, 9) and srand() especially will help to generate a random number at each time.
Take modulo of random number generated with 9 to make its range between (0 and 9).

Random number will decide the choice of computer as:
If the number is any number from 0-2 then the choice will be rock.
If the number is any number from 3-5 then the choice will be Paper.
If the number is any number from 6-9 then the choice will be Scissors.
game() function: This function consists of if-else statements that will compare the choice of user and computer. 

# Revisions to be made
- make game interate until user quits it
- make intro have some ASCII text graphics and probably sound
- try and make random generated values and user choices take turns randomly too. Because as it stands now, random choices are only made after user input