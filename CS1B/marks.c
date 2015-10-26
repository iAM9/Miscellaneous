#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)          // >80 A1		 <=70 && <80 A	 >=60  <70 B1	 >=50  <60 B	 <50 FAil
{
    float eng,phy,chem,cs,maths;
	float sum,per;
	//clrscr();
	printf("\tMARKS-SHEET PROGRAM");
	printf("\n\t*******************");
	printf("\n\nEnter english marks: ");
	scanf("%f",&eng);
	printf("Enter maths marks: ");
	scanf("%f", &maths);
	printf("Enter physics marks: ");
	scanf("%f",&phy);
	printf("Enter chemistry marks: ");
	scanf("%f",&chem);
	printf("Enter computer science marks: ");
	scanf("%f",&cs);sum = eng+phy+chem+cs+maths;
	per = (sum/500)*100;system("cls"); //clrscr() should be here in Turbo C!
	printf("\nEnglish: %.0f/100\n",eng);
	printf("\nMaths: %.0f/100\n",maths);
	printf("\nPhysics: %.0f/100\n",phy);
	printf("\nChemistry: %.0f/100\n",chem);
	printf("\nComputer Science: %.0f/100\n",cs);
	printf("\nPercentage: %.2f %c\n",per,'%');
	if(per>80)
	{printf("\nGrade: A-1");}
	else if(per>=70 && per<80)
	{printf("\nGrade: A");}
	else if(per>=60 && per<70)
	{printf("\nGrade: B-1");}
	else if(per>=50 && per<60)
	{printf("\nGrade: B");}
	else if(per<50)
	{printf("\nGrade: FAILED");}
	getch();
}
