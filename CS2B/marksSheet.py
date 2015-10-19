import sys

def main():
	
	title = "Marks Sheet program";
	programTitle(title);
	
	name = raw_input("Enter name: ");
	sid = raw_input("Enter student ID: ");
	maths = int(raw_input("Enter maths marks: "));
	physics = int(raw_input("Enter physics marks: "));
	chemistry = int(raw_input("Enter chemistry marks: "));
	
	per = (float)(maths+physics+chemistry)*100/300
	
	
	if(per > 85):
		grade = "A";
	elif(per >=75 and per <85):
		grade = "B";
	elif(per >=65 and per <75):
		grade = "C";
	elif(per >=45 and per <65):
		grade = "D";
	elif(per < 45):
		grade = "Fail";
	
	print "\n\n=========";
	print "Marks sheet"
	print "=========";
	
	print "Name: " + name;
	print "Student ID: " + sid;
	print ("\nMaths: %d/100" % maths);
	print ("Physics: %d/100" % physics);
	print ("Chemistry: %d/100" % chemistry);
	print ("Percentage: " + str(per) + "%");
	print "Grade: " + grade;
	
	
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
