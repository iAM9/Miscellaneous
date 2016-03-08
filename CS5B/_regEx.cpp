#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<iomanip>
#include<unordered_map>
#include<functional>
#include<regex>
#include<conio.h>

using namespace std;

map<char*, char*> table;

//vector<pair<regex,string>>table;

const char* FILENAME = "source.txt";
const char* O_FILENAME = "output.txt";
const int BUFFER_SIZE = 5; 

void DefineTable(void)
{/*
	table.push_back(make_pair(regex("end"),"KEYWORD_end"));
	table.push_back(make_pair(regex("def"),"KEYWORD_def"));
	table.push_back(make_pair(regex("main"),"KEYWORD_main"));
	table.push_back(make_pair(regex("puts"),"KEYWORD_null"));
	table.push_back(make_pair(regex(")"),"special_character_RIGHT_PARANTHESIS"));
	table.push_back(make_pair(regex("("),"special_character_LEFT_PARANTHESIS"));
	table.push_back(make_pair(regex(">="),"relational_operator_GREATER_THAN_EQUAL"));
	table.push_back(make_pair(regex("<="),"relational_operator_LESS_THAN_EQUAL"));
	table.push_back(make_pair(regex(":"),"special_character_COLON"));
	table.push_back(make_pair(regex(";"),"special_character_SEMI_COLON_LINE_TERMINATOR"));
	*/
	table["end"] = "KEYWORD_end";
	table["def"] = "KEYWORD_def";
	table["main"] = "KEYWORD_main";
	table["null"] = "KEYWORD_null";
	table["puts"] = "KEYWORD_puts";
	table[")"] = "special_character_RIGHT_PARANTHESIS";
	table["("] = "special_character_LEFT_PARANTHESIS";
	table[">="] = "relational_operator_GREATER_THAN_EQUAL";
	table["<="] = "relational_operator_LESS_THAN_EQUAL";
	table[":"] = "special_character_COLON";
	table[";"] = "special_character_SEMI_COLON_LINE_TERMINATOR"; 
}

void main(void)
{
	map<char*, char*>::iterator table_it;
	DefineTable();
	ifstream source_file(FILENAME);
	string buffer;	
	size_t pos;
	ofstream output_file(O_FILENAME);
	string temp_buffer;

	
	ifstream temp(FILENAME);
	
	while(getline(temp,temp_buffer))
		cout << temp_buffer << endl;


	temp.clear();
	cout << endl;
	while(source_file.good())
	{
		cout <<  endl << endl;

		output_file << endl << endl;

		cout <<  "\n-----------------------------------------------------------"<< endl;

		output_file << "\n-----------------------------------------------------------"<< endl;

		getline(source_file,buffer);
		cout << buffer <<  "\n-----------------------------------------------------------"<< endl;

		output_file << buffer << "\n-----------------------------------------------------------"<< endl;

		cout << setw(45) << "Attribute" << " " << setw(5) 
			<< "Token" << " " << setw(3) << "Position" << endl;

		output_file << setw(45) << "Attribute" << " " << setw(5) 
			<< "Token" << " " << setw(3) << "Position" << endl;

		cout << "-----------------------------------------------------------" << endl;

		output_file << "-----------------------------------------------------------" << endl;

		for (table_it = table.begin(); table_it != table.end() ; ++table_it)
		{
			pos = buffer.find(table_it->first,0);
			while(pos!= string::npos)
			{

				cout << setw(45) << table_it->second << " "  << 
					setw(5) << table_it->first << " " << setw(3) << pos << endl;


				output_file << setw(45) << table_it->second << " "  << 
					setw(5) << (table_it->first) << " " << setw(3) << pos << endl;

				pos = buffer.find(table_it->first,pos+1);
			}
		}
	}
	cout <<  "\n-----------------------------------------------------------"<< endl;
	output_file <<  "\n-----------------------------------------------------------"<< endl;
	getch();
}

