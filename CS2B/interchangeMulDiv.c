#include<stdio.h> // using multiplication/division
#include<conio.h> // Created by Ibrahim Asif Mirza
void main(void)
{
	int a = 45, b = 12;
	clrscr();
	printf("\n\tINTERCHANGING THE VALUES OF TWO INTEGERS");
	printf("\n\t****************************************");
	printf("\n\nBefore interchanging:");
	printf("\na = %d, b = %d",a,b);
	a = a * b; 	// 45 * 12 = 540
	b = a / b; 	// 540 / 12 = 45
	a = a / b; 	// 540 / 45 = 12
	printf("\n\nAfter interchanging:");
	printf("\na = %d, b = %d",a,b);
	getch();
}
