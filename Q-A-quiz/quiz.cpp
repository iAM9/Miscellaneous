

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void main(void)
{
	string line;
	char ans[100] = {   'a', 'd', 'b', 'a', 'a',
						'a', 'd', 'c', 'a', 'd',
						'a', 'b', 'b', 'c', 'd',
						'a', 'a', 'd', 'c', 'b',
						'b', 'd', 'a', 'd', 'b',
						'a', 'a', 'a', 'a', 'a',
						'd', 'b', 'a', 'a', 'a',
						'a', 'd', 'c', 'a', 'a',
						'b', 'd', 'a', 'a', 'b',
						'c', 'd', 'a', 'a', 'a',
						'a', 'a', 'a', 'a', 'a',
						'c', 'c', 'a', 'a', 'b',
						'b', 'd', 'a', 'a', 'd',
						'a', 'd', 'c', 'b', 'c',
						'd', 'a', 'b', 'c', 'b',
						'd', 'a', 'a', 'a', 'c',
						'd', 'a', 'a', 'c', 'b',
						'c', 'd', 'a', 'a', 'b',
						'a', 'a', 'c', 'a', 'c',
						'a', 'b', 'a', 'c', 'b' };
	char choice;


	int q_count = 100;
	int line_count = 6;
	int i;
	int score = 0;

	ifstream myfile("ques.txt");

	if (myfile.is_open())
	{
		for (i = 0; i < q_count; i++)
		{
			
			for (int j = 0; j < 6; j++)
			{
				
				getline(myfile, line);
				cout << line << endl;
			}
			cout << "Answer(a,b,c,d): " << endl;
			cin >> choice;
			if (choice == ans[i])
			{
				cout << "Correct!" << endl << endl;
				score++;
			}
			
			else
				cout << "Incorrect!" << endl << endl;
		}
		myfile.close();
	}
	else
		cout << "Error! Couldn't open file!" << endl;
	cout << "Final score: " << score << endl;

	getchar();
	getchar();

}
