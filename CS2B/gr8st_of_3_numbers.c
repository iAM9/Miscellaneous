#include<stdio.h> // CREATED BY: IBRAHIM ASIF MIRZA//
#include<conio.h> // CS2B					   //
void main(void)	  // 2011-CS-076			   //
{
	int a,b,c;
	int sum,pro;
	float avg;
	printf("\tA PROGRAM TO DETERMINE THE GREATER AND LESSER");
	printf("\n\tOF THREE NUMBERS AND FIND OUT THEIR SUM, PRODUCT");
	printf("\n\t		AND AVERAGE");
	printf("\n\t--------------------------------------------------");
	printf("\n\nEnter a number: ");
	scanf("%d", &a);
	printf("\nEnter another number: ");
	scanf("%d", &b);
	printf("\nEnter yet another number: ");
	scanf("%d",&c);
	sum = a+b+c;
	pro = a*b*c;
	avg = sum/3;
	printf("\nSum: %d",sum);
	printf("\nProduct: %d",pro);
	printf("\nAverage: %f",avg);
	if(a>b && a>c)
		if(b>c)
			printf("\n\n%d is the greatest number and %d is the smallest number!",a,c);
		else
			printf("\n\n%d is the greatest number and %d is the smallest number!",a,b);
	else if(b>a && b>c)
		if(a>c)
			printf("\n\n%d is the greatest number and %d is the smallest number!",b,c);
		else
			printf("\n\n%d is the greatest number and %d is the smallest number!",b,a);
	else if(c>a && c>b)
		if(a>b)
			printf("\n\n%d is the greatest number and %d is the smallest number!",c,b);
		else
			printf("\n\n%d is the greatest number and %d is the smallest number!",c,a);
	else
		printf("\n\nAll are equal!");
	getch();
}

