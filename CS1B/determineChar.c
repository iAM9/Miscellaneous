#include<stdio.h>
#include<conio.h>
void main(void)
{
	char alph;
	printf("A PROGRAM TO DETERMINE AN UPPER/LOWER CASE CHARACTER");
	printf("\n----------------------------------------------------");
	printf("\n\nEnter any alphabet and press enter: ");
	alph = getche();
	getch();
	if(alph >= 'A' && alph<= 'Z')
		printf("\n\nYou've typed \'%c\', which is an upper-case charcter!", alph);
	else
		printf("\n\nYou've typed \'%c\', which is a lower-case charcter!", alph);
	getch();
}
