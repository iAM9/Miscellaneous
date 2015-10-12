using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;
using System.Text.RegularExpressions;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
           
            Hashtable htable = new Hashtable();

            htable.Add("int[A-Za-z]+[A-Za-z0-9]+","integer declaration");
            htable.Add("int[A-Za-z]*[A-Za-z0-9]*[=][0-9]*", "integer initialization to numbers");
            htable.Add("def[A-Za-z][A-Za-z0-9]()", "function defintion start");
            htable.Add("[0-9]*[+][0-9]*[+][0-9]*", "add statement");
            htable.Add("puts[\"][A-Za-z]+[\"]", "print statement");
         
            List<string> token_table = new List<string>();
            while (true)
            {
                Console.WriteLine("Enter: ");
                string input = Console.ReadLine();
               
                    foreach (DictionaryEntry entry in htable)
                    {
                        if (Regex.IsMatch(input, (string)entry.Key))
                        {
                            Console.WriteLine(entry.Value);
                        }
                        
                    }

            }
        }
    }
}
