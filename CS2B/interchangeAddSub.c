#include<stdio.h> // using addition/subtraction
#include<conio.h> // Created by Ibrahim Asif Mirza
void main(void)
{
	int a = 45, b = 12;
	clrscr();
	printf("\n\tINTERCHANGING THE VALUES OF TWO INTEGERS");
	printf("\n\t****************************************");
	printf("\n\nBefore interchanging:");
	printf("\na = %d, b = %d",a,b);
	a = a + b; 	// 45 + 12 = 57
	b = a - b; 	// 57 - 12 = 45
	a = a - b; 	// 45 - 57 = 12
	printf("\n\nAfter interchanging:");
	printf("\na = %d, b = %d",a,b);
	getch();
}
