using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
// by
// IBRAHIM ASIF MIRZA
// 2011-CS-076
// CS3B

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
Console.Write("\n\tA SIMPLE CALCULATOR");
Console.Write("\n\t*******************");
Console.Write("\n\nEnter a number: ");    
decimal num1 = Convert.ToDecimal(Console.ReadLine());
Console.Write("\nEnter another number: ");
decimal num2 = Convert.ToInt16(Console.ReadLine());
decimal sum = num1 + num2;
decimal sub = num1 - num2;
decimal pro = num1 * num2;
decimal div = num1 / num2;
Console.Write("\n\nSum: " + sum + "\nDifference: " + sub + "\nProduct: " + pro + "\nQuotient: " + div);
Console.Read();
      }
  }
}
