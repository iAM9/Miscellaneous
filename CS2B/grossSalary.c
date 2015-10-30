#include<stdio.h>
#include<conio.h> // Created by Ibrahim Asif Mirza
void main(void)
{
	float bas_sal;
	float house_rent, daily_all;
	printf("\n\tTO CALCULATE THE GROSS SALARY OF AN EMPLOYEE");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\nEnter your monthly salary(in rupees): ");
	scanf("%f",&bas_sal);
	if(bas_sal<1500)
	{
		house_rent = bas_sal*10/100;
		daily_all = bas_sal*90.0/100;
		printf("\nHouse rent: Rs. %0.2f",house_rent);
		printf("\nDaily allowance: Rs. %0.2f",daily_all);
	}
	else if(bas_sal >= 1500)
	{
		house_rent= 500;
		daily_all = bas_sal*98/100;
		printf("\nHouse rent: Rs. %0.2f",house_rent);
		printf("\nDaily allowance: Rs. %0.2f",daily_all);
	}
	getch();
}
