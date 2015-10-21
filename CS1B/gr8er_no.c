#include<stdio.h> // CREATED BY: IBRAHIM ASIF MIRZA//
#include<conio.h> // CS2B					   //
void main(void)	  // 2011-CS-076			   //
{
	int a,b;
	printf("A PROGRAM TO DETERMINE THE GREATER OF TWO NUMBERS");
	printf("\n--------------------------------------------------");
	printf("\n\nEnter a number: ");
	scanf("%d", &a);
	printf("\nEnter another number: ");
	scanf("%d", &b);
	if(a>b)
		printf("\n%d is greater than %d",a,b);
	else
		printf("\n%d is greater than %d",b,a);
	getch();
}
