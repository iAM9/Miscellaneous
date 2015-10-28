def main():

	print ("--------------------------------------------------");
	print ("A small program to determine whether the input number is even or odd");
	print("----------------------------------------------------");
	print;
	
	num = int(raw_input("Enter a number: "));
	
	if num == 0:
		print "%d is zero!" % (num);
	elif num%2 == 0:
		print "%d is even!" % (num);
	elif num%2 != 0:
		print "%d is odd!" % (num);
	else:
		print "Whoa!";
		
	close = raw_input();
		

	
	
if __name__ == "__main__":
	main()
