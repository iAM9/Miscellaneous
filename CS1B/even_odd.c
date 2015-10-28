#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a;
	printf("\nA PROGRAM TO FIND OUT WHETHER THE INPUT NUMBER IS EVEN OR ODD");
	printf("\n-------------------------------------------------------------");
	printf("\n\nEnter a number: ");
	scanf("%d", &a);
	if(a%2 == 0)
		printf("You've entered an even number!");
	else
		printf("You've entered a odd number!");
	getch();
}
