/* A SIMPLE CALCULATOR OF TWO DIGITS
   by Ibrahim A. Mirza
   (21 Nov. 2010*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
void main(void)
{
	
	/*float i, j,*/ float sum, pro, diff, div; double u, v;
	float expo, i, j;
	char a;
	cout << "\tA SIMPLE CALCULATOR OF TWO DIGITS\n";
    cout << "\t             by Ibrahim A. Mirza\n\n";
	cout << "-Please enter a total of ONLY TWO digits at a time.\n";
	cout << "-Please enter ONLY ONE operator at a time.\n";
	cout << "-Example: 2+2 or 23.45^34 or 23.54-12.222
	cout << "-Use the num-pad to enter numbers and perform arithmetical operations.\n";
	cout << "-Press ctrl+c to close the program.\n";
	cout << "-This program performs addition(+), subtraction(-), multiplicaion(* or x)\n";
	cout << "division(/) and exponent(^) of two numbers.\n\n";
	for(;;)
		{
		    
		    cin >> i;
		    cin >> a;
	        cin >>  j;

		  if(a == '+')
		  {
			  sum = i + j;
			  cout << "= "<< sum << endl;
		  }

		  else if(a == '-')
		  {
			  diff = i - j;
		      cout << "= "<< diff<< endl;
		  }

		  else if(a == '/')
		  {
			  div = i / j;
		      cout << "= "<< div << endl;
		  }

		  else if(a =='*'  ||  a=='x' ||  a=='X')
		  {
			  pro = i * j;
		      cout << "= "<< pro << endl;
		  }

		  else if(a == '^')
		  {
			  expo = pow(i,j);
		      cout << "= " << expo << endl;
		  }

		  else if((a != '+' || a!='-' || a!='/' || a!='^' || a!='*' || a==' '))
		  {
			  cout << "Error!\n"; continue;
		  }

		  else if(i>=('a'-0) && i<=('z'-0))
		  {
			  cout << "Error!\n"; goto sub;
		  }

		  else if(j>='a' && j<='z')
		  {
			  cout << "Error!\n"; goto sub;
		  }
		  
		  continue;
		  break;
		  
		  
		 }
          sub: cout << "Error";
		 getchar();
	 
	
}
