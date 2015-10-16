import sys
import math

def main():
	
	title = "Classify temperature of day according to ranges";
	programTitle(title);
	
	temp = float(raw_input("Enter centigrade temperature: "));
	
	if(temp < 0):
		print "Subzero!";
	elif(temp>0 and temp <= 4):
		print "VERY cold day!";
	elif(temp > 4 and temp <=20):
		print "Nice day!";
	elif(temp > 20 and temp <=45):
		print "Hot day!";
	else:
		print "IndexError!";
	
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
