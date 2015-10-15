#include<stdio.h>
#include<conio.h>

void main(void)         
 {
	 int no,cntr,lim;
	 printf("\t\tMULTIPLICATION TABLE");
	 printf("\n\t\t====================");
	 printf("\n\nEnter any number: ");
	 scanf("%d",&no);
	 printf("Enter the number to which the table would proceed: ");
	 scanf("%d",&lim);
	 for(cntr=0;cntr<=lim;cntr++)
		 printf("\n\t%d x %d = %d",no,cntr,no*cntr);
	 getch();
}
