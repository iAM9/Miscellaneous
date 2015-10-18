#include<stdio.h> /*Marks sheet -Ibrahim Asif Mirza*/
#include<conio.h>

void main(void)
{
	int maths, cs, phy;
	clrscr();
	float avg,per,total;
	printf("\n\tMARKS SHEET");
	printf("\n\t===========");
	printf("\n\nEnter maths marks(out of 100): ");
	scanf("%d",&maths);
	printf("\nEnter physics marks(out of 100): ");
	scanf("%d",&phy);
	printf("\nEnter computer science marks(out of 100): ");
	scanf("%d",&cs);
	total = phy + cs + maths;
	avg = total / 3;
	printf("\n\nTotal marks: %0.2f",total);
	printf("\nAverage marks: %0.2f",avg);
	per = (total/300)*100;
	if(per>=60 && per<=69)
		printf("\nPercentage: %.2f%c\nGrade: B",per,37);
	else if(per>=70 && per<=79)
		printf("\nPercentage: %0.2f%c\nGrade: A",per,37);
	else if(per>=80 && per<=100)
		printf("\nPercentage: %0.2f%c\nGrade: A+",per,37);
	else
		printf("\nPercentage: %0.2f%c\nGrade: C",per,37);
	getch();
}
