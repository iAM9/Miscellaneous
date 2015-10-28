import sys
import math

def main():
	
	title = "Determine the roots of a quadratic equation";
	programTitle(title);
	
	num1 = int(raw_input("Enter a: "));
	
	num2 = int(raw_input("Enter b: "));
	
	num3 = int(raw_input("Enter c: "));
	
	print ("\nQuadratic equation: " + str(num1) + "x" + chr(253) + " + " + str(num2) + "x" + " + " + str(num3));
	
	det = (math.pow(num2, 2)) - (4 * num1 * num3);
	x1 = (-num2 + (math.sqrt(det))) / (2 * num1);
	x2 = (-num2 - (math.sqrt(det))) / (2 * num1);
	
	
	print ("\nDeterminant: %f" % (det));
	print ("x1: " + str(x1));
	print ("x2: " + str(x2));
	
	raw_input("Press enter to continue...");
	

def programTitle(titleLabel):
	
	for i in range(0, len(titleLabel)):
		sys.stdout.write("-");

	print("\n" + titleLabel);
	
	for i in range(0, len(titleLabel)):
		sys.stdout.write("-");
	
	print("\n");
	
	
if __name__ == "__main__":
	main()
