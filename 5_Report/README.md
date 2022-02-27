# DESCRIPTION
   This is a game in which two players are required to play, the computer and the user.There are in total 21 match sticks to start the game. First we ask the user to pick either 1 or 2 or 3 or 4 matches per pick. Once the user makes his/her pick, computer makes the picking(same rules apply to the computer i.e., it can pick either 1 or 2 or 3 or 4 matches per pick). The trick is, computerspick is always 5 minus the pick of the user. For example, if computers pick is variable c and user pick is stored in variable p,
then: c = 5 – p;
   This makes sure computer always wins the game. That is, the last pick will always be of the user.But I have tried and remodelled the code where both parties have equal chances to win.
   I have taken the base sourcecode from 21 match sticks game in FreeSourceCode.net and I modified it with user picking and computer picking features which allows both of the players to have an equal chance of winning
# REQUIREMENTS
# HIGH LEVEL REQUIREMENTS
     *adding up a new feature to cancel the trick where computer wins.
     *make sure the while loop keeps executing until a break statement is occurred inside the loop to terminate the execution of the loop.
# LOW LEVEL REQUIREMENTS
     *Two players- The Computer and The User
     *create sourcecode.c to comply the game
         -> There are ample matchsticks
         -> The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
         -> After the person picks, the computer does its picking.
         -> Whoever is forced to pick up the last matchstick loses the game.

# SWOT
     *Strength- It is a simple and entertaining game,easy to play, also easy to implement the sourcecode.
     *Weakness- Less game turns
     *Opportunity- We can even create a console game when we modify the sourcecode.
     *Threat- Risk of failing to maintain a fun factor when computer is compromised.
     
# 4W's and 1H's
     * WHO -  Player1 is the Computer and Player2 can be any person i.e the user.
     
     * WHAT - It is a simple easy game that can be played with two players.
     
     * WHERE- The user can play this with the computer implemented through any c compiler.
     
     * WHY - It is for entertainment and can help us to loosen up.
     
     * HOW -  This game is implemented using any c compiler.

# ARCHITECTURE
      For this gaming code,the diagramatic representation of it's working and operations are depicted below.
      
# IMPLEMENTATION


# Main Code
    
#include <stdio.h>
#include <windows.h>
int main()
{
    int m = 21, p, c;  
  
    while(1)  
    {  
        printf("\nNumber of Match sticks left = %d\n", m);  
        printf("Pick 1 or 2 or 3 or 4 matches\n");  
        scanf("%d", &p);  
  
        if(p > 4 || p < 1)  
            continue;  
  
        m = m - p;  
  
        printf("Number of matches left = %d\n", m);  
  
        c = 5 - p;  
  
        printf("out of which computer picked up %d\n", c);  
  
        m = m - c;  
  
        if(m == 1)  
        {  
            printf("\nNumber of matches left = %d\n", m);  
            printf("You lost the Game\n");  
            break;  
        }  
    }  
  
    return 0;  
}
/* User Picked Function*/
user_picked(total)
{
int me;
char ch;
int wrong = 1;
while(wrong)
{
	gotoxy(29,14);
	printf("   ");
	gotoxy(29,14);
	ch = getchar();
	me = atoi(&ch);
	printf("%d",me);
	if(me<1||me>4||me>total)
	{
	gotoxy(33,17);
	printf("Invalid Pick-Up, Try Again");
	delay(1000);

	if(me){
	gotoxy(33,17);
	printf("                           ");
        }
	}

	else
	wrong = 0;

}
gotoxy(55,14);
printf(" ");
return(me);
}
/*Comp_picked function*/
comp_picked(total)
{
int me;
if(total>=10)
me = 1;
else
switch(total)
{
case 2:
me = 1;
break;
case 3:
me = 2;
break;
case 4:
me = 3;
break;
case 5:
me = 4;
break;
case 7:
me = 1;
break;
case 8:
me = 2;
break;
case 9:
me = 3;
break;
}

gotoxy(55,14);
printf("%d",me);
gotoxy(29,14);
printf(" ");
return(me);
}



# Output




