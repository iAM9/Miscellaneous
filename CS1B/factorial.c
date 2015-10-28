#include<stdio.h>
#include<conio.h>


void main(void)         
 {
	 int fctrl=1,no,count;
	 printf("\tFACTORIALS");
	 printf("\n\t==========");
	 printf("\n\nEnter any number: ");
	 scanf("%d",&no);
	 for(count=no;count>=1;count--)
		{ 
			fctrl = fctrl * count;
			
	    }
	 printf("\nFactorial: %d",fctrl);
	 getch();
}
