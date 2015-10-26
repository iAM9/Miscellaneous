#include<stdio.h>
#include<conio.h>

void main(void)         
 {
	 float cent;
	//clrscr();
	printf("\tTEMPERATURE");
	printf("\n\t***********");
	printf("\n\nEnter centigrade temperature"
		          "(from -10%c to 45%c): ",248,248);
	scanf("%f",&cent);
	if(cent>=-10 && cent<=0){printf("\nVery cold day!");}
	else if(cent>=1 && cent<=4){printf("\nCold day!");}
	else if(cent>=5 && cent<=20){printf("\nNice day!");}
	else if(cent>=21 && cent <=45){printf("\nHot day!");}
	else {printf("\nTemperature out of range!");}
	getch();
