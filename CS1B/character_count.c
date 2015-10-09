#include<stdio.h>
#include<conio.h>
void main(void)
{
    char alph;
	int num;
	printf("Enter anything: ");
	for(num=0;;num++)
	{
		alph = getche();
		if(alph == 13)
		{break;}
	}
	if(num > 1)
	{printf("\nThere are %d characters.",num);}
	else if(num == 1)
	{printf("\nThere is only %d character.",num);}
	getch();
}


