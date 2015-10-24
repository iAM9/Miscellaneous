import sys

def main():
	
	title = "A program to determine the greater of two numbers";
	programTitle(title);
	
	num1 = float(raw_input("Enter a number: "));
	num2 = float(raw_input("Enter another number: "));
	
	if(num1 > num2):
		print "\n%f is greater than %f" % (num1, num2);
	elif(num1 < num2):
		print "\n%f is greater than %f" % (num2, num1);
	elif(num1== num2):
		print "\n%f is equal to %f" % (num2, num1);
		
	raw_input("\nPress enter to continue...");

def programTitle(titleLabel):
	
	for i in range(0, len(titleLabel)):
		sys.stdout.write("-");

	print("\n" + titleLabel);
	
	for i in range(0, len(titleLabel)):
		sys.stdout.write("-");
	
	print("\n");
	
	
if __name__ == "__main__":
	main()
