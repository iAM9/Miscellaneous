#include<stdio.h> /* A program to determine the area of a*/
#include<conio.h> /* circle.  –Ibrahim Asif Mirza        */
#define PI 3.14

void main(void)
{
	float ans, rad;
	clrscr();
	printf("\n\tAREA OF CIRCLE");
	printf("\n\t==============");
	printf("\n\nEnter radius of the circle: ");
	scanf("%f",&rad);
	ans = PI * rad * rad;
	printf("\Area of the given circle: %f sq.units.",ans);
	getch();
}
