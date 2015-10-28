import sys

def main():
	
	title = "Multiplication tables";
	programTitle(title);
	
	num = int(raw_input("Enter a number for which its multiplication table will be displayed: "));
	
	limit = int(raw_input("Table should display multiples upto which number: "));
	
	
	print ("\n" + str(num) + " times table:-");
	print("---------------------------");
	for i in range(0, limit+1):
		print (str(num) + " x " + str(i) + " = " + (str(num*i)));
	
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
