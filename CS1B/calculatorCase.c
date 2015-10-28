#include<stdio.h>
#include<conio.h>

void main(void)         
 {
	 float i,j, sum,pro,diff,quo;
	 char op;
	 //clrscr();
	 printf("\tA SIMPLE CALCULATOR");
	 printf("\n\t===================");
	 printf("\n\nEnter a number: ");
	 scanf("%f",&i);
	 printf("Enter another number: ");
	 scanf("%f",&j);
	 sum = i+j;
	 pro = i*j;
	 quo = i/j;
	 diff= i -j;
	 printf("Enter mathematical operator(+,-,*,/): ");
	 op = getche();
	 getch();
	 switch(op)
	{	 
	     case '+':
			printf("\n\nSum: %f", sum);
			break;
		 case '-':
			 printf("\n\nDifference: %f", diff);
			 break;
		 case '*':
			 printf("\n\nProduct: %f",pro);
			 break;
		 case '/':
			 printf("\n\nQuotient: %f",quo);
			 break;
		 default:
			 printf("Invalid entry!");
	 }
	 getch();
}
