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

	
