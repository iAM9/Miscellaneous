def main():
	print ("--------------------");
	print ("Counting characters");
	print("----------------------");
	print;
	string = raw_input("Enter anything(press Enter to finish typing): ");
	print string;
	count = 0;
	
	for ch in string:
		if ch == " ":
			continue;
		count += 1;
		
	print "Number of characters in \"%s\" is: %d character(s) without spaces" % (string, count);
	close = raw_input();
	
	
if __name__ == "__main__":
	main()
