def main():
	print ("Simple calculator");
	print("----------------------");
	print;
	num1 = float(raw_input("Enter first number: "));
	
	op = raw_input("Enter mathematical operator (/, *, +, -):");
	
	num2 = float(raw_input("Enter second number: "));
	

	if(op == '*'):
		print num1 * num2;
	elif(op == "+"):
		print num1 + num2;
	elif(op == "-"):
		print num1 - num2;
	elif(op == "/"):
		print num1/num2;
		
	close = raw_input();
		
if __name__ == "__main__":
	main()
