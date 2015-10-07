def main():
	age = int(raw_input("Enter your age: "));

	print age;

	if(age<0):
		print("Whoa!");
	elif(age >0 and age <10):
		print("A toddler you are!");
	elif(age>=10 and age<13):
		print("You should be a member of the Kids Next Door!");
	elif(age>=13 and age<=19):
		print("Obnoxious teenager!");
	elif(age>=20 and age<=26):
		print("Welcome to the real world!");
	elif(age>26 and age<=36):
		print("Prepare for a middle-age crisis!");
	elif(age>36 and age<=50):
		print("Almost to the end!");
	elif(age>50 and age<=80):
		print("Sweet lil' ol' person!");
	elif(age>80):
		print("prepare to meet your maker!");
	else:
		print("Warning! You've doomed us all!");
		
	close = raw_input();
		
if __name__ == "__main__":
	main()
