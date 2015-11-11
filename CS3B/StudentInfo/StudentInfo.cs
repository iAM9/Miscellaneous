using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

// IBRAHIM ASIF MIRZA
// 2011-CS-076
// CS3B

namespace ConsoleApplication1
{
	class StudentInfo
	{
		private string _name;
		public string Name
		{
			get
			{
				return _name;
			}
			set
			{
				_name = value;
			}
		}

		private string _rollnumber;
		public string RollNumber
		{
			get
			{
				return _rollnumber;
			}
			set
			{
				_rollnumber = value;
			}
		}

		private string _section;
		public string Section
		{
			get
			{
				return _section;
			}

			set
			{
				_section = value;
			}
		}

		private string _dept;
		public string Department
		{
			get
			{
				return _dept;
			}

			set
			{
				_dept = value;
			}
		}

		public string GetAll()
		{

			Console.Write("\nEnter student's name: ");
			_name = Console.ReadLine();
			Console.Write("\nEnter student's roll number: ");
			_rollnumber = Console.ReadLine();
			Console.Write("\nEnter student's section: ");
			_section = Console.ReadLine();
			Console.Write("\nEnter student's department: ");
			_dept = Console.ReadLine();
			return _name;
			return _dept;
			return _rollnumber;
			return _section;
		}

		public void PrintAll()
		{
			Console.Clear();
			Console.Write("\nPersonalia");
			Console.Write("\n**********");
			Console.Write("\nName       : {0}", _name);
			Console.Write("\nRoll number: {0}", _rollnumber);
			Console.Write("\nSection    : {0}", _section);
			Console.Write("\nDepartment : {0}", _dept);
			Console.Read();
		}

	}
}
