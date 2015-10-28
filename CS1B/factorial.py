def main():

	print ("--------------------------------------------------");
	print ("A program to calculate the factorial of the input number");
	print("----------------------------------------------------");
	print;
	
	num = int(raw_input("Enter a number: "));
	print factorial(num);
	
	close = raw_input();
	
def factorial(int):
	if int == 0:
		return int;
	
	if int == 1:
		return int;
	
	int = int * factorial(int-1);
	return int;
	
	
	
	
if __name__ == "__main__":
	main()
