#include <my_global.h>
#include <mysql.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<exception>

using namespace std;

int main(int argc, char **argv)
{
	MYSQL *conn;
	MYSQL_RES *result;
	MYSQL_ROW row;
	MYSQL_FIELD *field;

	int num_fields;
	int i;

	char menu_choice;
	char exit;

	string student_id;
	string query;
	string st_amount;
	string st_date;
	string st_comments;
	string st_bill_month;

	cout << "MYSQL Version: " << mysql_get_client_info() << endl;
	cout << "#---------------------------------#" << endl << endl;

	conn = mysql_init(NULL);
	mysql_real_connect(conn, "127.0.0.1", "root", "", "testdb", 0, NULL, 0);
	do
	{
		system("CLS");
		cout << "Welcome!" << endl;
		cout << "\nMenu" << endl;
		cout << "*******" << endl << endl;

		cout << "1. Insert record" << endl;
		cout << "2. Read record" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Enter choice: ";

		cin.get(menu_choice);
		switch(menu_choice)
		{
		case '1':
			{
					cout << "1. Insert record" << endl;
					cout << "\n\nEnter student id: ";
					cin >> student_id;
					cout << "\nEnter date(YYYYMMDD): ";
					cin >> st_date;
					cout << "\nEnter amount: ";
					cin >> st_amount;
					cout << "\nEnter comments: ";
					cin >> st_comments;
					query = "INSERT INTO student_bill (st_id ,bill_date ,amount ,comments) VALUES(" + student_id +", " + st_date+ ", " + st_amount + ", '" + st_comments + "')";
					//cout << query;
					if(mysql_query( conn,query.c_str() ) != NULL)
					{
						cout << "Data inserted successfully!" << endl;
						
					}
					else
						cerr << mysql_error << endl;
					getch();
				break;
			}
		case '2':
			{
				cout << "2. Read record(s)" << endl;
				cout << "a) Read a single record" << endl;
				cout << "b) Read all records" << endl;
				cout << "Enter choice: ";
				menu_choice = getche();

				if(menu_choice == 'a')
				{
					cout << "\n\n2. Read record(s)" << endl;
					cout << "a) Read a single record" << endl;
					cout << "\n\nEnter student id: ";
					cin >> student_id;
					cout << "\n\nEnter student bill month: ";
					cin >> st_bill_month;
					query = "SELECT * FROM student_bill where st_id = " + student_id + " and month(bill_date) = " + st_bill_month + " order by bill_date desc";
					mysql_query(conn, query.c_str() );
					result = mysql_store_result(conn);

					
					num_fields = mysql_num_fields(result);
					

					while ((row = mysql_fetch_row(result)))
					{
						for(i = 0; i < num_fields; i++)
						{
							if (i == 0) {
								while(field = mysql_fetch_field(result)) {
									cout << " " << setw(11) << field->name;
								}
								cout << endl;
							}
							//  printf("%s  ", row[i] ? row[i] : "NULL");
							cout << " " << setw(11) << row[i] ? row[i] : "NULL";
						}
					}
					cout << endl;
					cout << "\nPress enter to continue...!" << endl;
					getch();
					break;
				}
				else if(menu_choice == 'b')
				{
					cout << "\n\n2. Read record(s)" << endl;
					cout << "b) Read all records" << endl;
					mysql_query(conn, "SELECT * FROM student_bill");
					result = mysql_store_result(conn);

					num_fields = mysql_num_fields(result);

					while ((row = mysql_fetch_row(result)))
					{
						for(i = 0; i < num_fields; i++)
						{
							if (i == 0) {
								while(field = mysql_fetch_field(result)) {
									cout << " " << setw(11) << field->name;
								}
								cout << endl;
							}
							//  printf("%s  ", row[i] ? row[i] : "NULL");
							cout << " " << setw(11) << row[i] ? row[i] : "NULL";
						}
					}
				}
				else
				{
					cout << "Invalid!" << endl;
				}

				cout << endl;
				cout << "\nPress enter to continue...!" << endl;
				getch();
				break;
			}



		default:
			{
				cout << "Invalid choice! Try again!" << endl;
				break;
			}
		}
		cout << "Do you want to go the menu? (y/n): ";
		exit = getche();
	}while(exit == 'y' || exit == 'Y');

	mysql_free_result(result);
	mysql_close(conn);
	getch();
}


