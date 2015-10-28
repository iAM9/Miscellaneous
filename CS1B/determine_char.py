import sys

def main():
	
	title = "\nA program to determine whether the input character is uppercase or lowercase";
	
	headingLine(len(title));
	print (title);
	headingLine(len(title));
	print;
	print;
	
	input = raw_input("Enter a character and then press Enter: ");
	
	if (ord(input)>=65 and ord(input)<=90):
		print "\n\"%c\" is an uppercase character!" % (input);
	elif(ord(input)>=97 and ord(input)<=122):
		print "\n\"%c\" is a lowercase character!" % (input);
	else:
		print "\nYou just messed with the natural order of this world! We're doomed!";
		
		
	raw_input("\nPress enter to continue...");

def headingLine(length):
	for i in range(0, length):
		sys.stdout.write("-");
	
if __name__ == "__main__":
	main()
