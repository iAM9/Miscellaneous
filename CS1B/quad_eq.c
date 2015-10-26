#include<stdio.h> // 
#include<conio.h> // Created by Ibrahim Asif Mirza
#include<math.h>
void main(void)
{
	float a,b,c;
	float x_1, root;
	float x_2, det;
	printf("\n\tTO FIND OUT THE ROOTS OF A QUADRATIC EQUATION");
	printf("\n\t*********************************************");
	printf("\n\n\t\tax%c + bx + c",253);
	printf("\n\nEnter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	printf("\n\nYour quadratic equation is: %1.0fx%c + %1.0fx + %1.0f",a,253,b,c);
	det = (b*b)-(4*a*c);
	root = sqrt(det);
	x_1 = (-b+(root)) / (2*a);
	x_2 = (-b-(root)) / (2*a);
	printf("\n\nThe determinant of the given equation is: %0.2f",det);
	printf("\n x1 = %f",x_1);
	printf("\n x2 = %f",x_2);
	getch();
}
        
