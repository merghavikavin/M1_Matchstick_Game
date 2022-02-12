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

/Comp_picked function/
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

