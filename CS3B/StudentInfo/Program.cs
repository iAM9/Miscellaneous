using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;

// IBRAHIM ASIF MIRZA
// 2011-CS-076
// CS3B

namespace ConsoleApplication1
{
	class Program
	{
		static void Main(string[] args)
		{
			Console.BackgroundColor = ConsoleColor.White;
			Console.ForegroundColor = ConsoleColor.DarkCyan;
			StudentInfo Ibrahim = new StudentInfo();
			Ibrahim.GetAll();
			Ibrahim.PrintAll();
		}
	}
}


