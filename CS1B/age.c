#include<stdio.h>
#include<conio.h>
void main(void)
{
    int age;
	printf("Enter your age(in years): ");
	scanf("%d",&age);
	if(age>=1 && age<13)
	{printf("\nYour just a kid!");}
	else if(age>=13 && age<=19)
	{printf("\nHello, teenager!");}
	else if(age>=20 && age<30)
	{printf("\nYou're in your twenties!");}
	else if(age>=30 && age<40)
	{printf("\nYou're in your thirties!");}
	else if(age>=40 && age<50)
	{printf("\nYou're in your forties!");}
	else if(age>=50 && age<70)
	{printf("\nYou're a middle-aged person!");}
	else if(age>=70 && age<=85)
	{printf("\nYou might need help crossing the street, senior citizen!");}
	else if(age>85)
	{printf("\nYou're lucky to live this long!");}
	else if(age==0)
	{printf("\nAre you even born yet?");}
	getch();
}


