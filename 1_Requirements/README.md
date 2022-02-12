#DESCRIPTION
   This is a game in which two players are required to play, the computer and the user.There are in total 21 match sticks to start the game. First we ask the user to pick either 1 or 2 or 3 or 4 matches per pick. Once the user makes his/her pick, computer makes the picking(same rules apply to the computer i.e., it can pick either 1 or 2 or 3 or 4 matches per pick). The trick is, computerspick is always 5 minus the pick of the user. For example, if computers pick is variable c and user pick is stored in variable p,
then: c = 5 – p;
   This makes sure computer always wins the game. That is, the last pick will always be of the user.But I have tried and remodelled the code where both parties have equal chances to win.
   I have taken the base sourcecode from 21 match sticks game in FreeSourceCode.net and I modified it with user picking and computer picking features which allows both of the players to have an equal chance of winning
#REQUIREMENTS
#HIGH LEVEL REQUIREMENTS
     *adding up a new feature to cancel the trick where computer wins.
     *make sure the while loop keeps executing until a break statement is occurred inside the loop to terminate the execution of the loop.
#LOW LEVEL REQUIREMENTS
     *Two players- The Computer and The User
     *create sourcecode.c to comply the game
         -> There are ample matchsticks
         -> The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
         -> After the person picks, the computer does its picking.
         -> Whoever is forced to pick up the last matchstick loses the game.

#SWOT
     *Strength- It is a simple and entertaining game,easy to play, also easy to implement the sourcecode.
     *Weakness- Less game turns
     *Opportunity- We can even create a console game when we modify the sourcecode.
     *Threat- Risk of failing to maintain a fun factor when computer is compromised.
