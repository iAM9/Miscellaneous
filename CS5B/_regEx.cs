using System;
using System.Collections;
using System.Linq;
using System.Text;
using System.IO;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

namespace SLR
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] reg_table = new string[3];
            reg_table[0] = "def[ ][A-Za-z0-9]+()";
            reg_table[1] = "puts[(][\"][a-zA-Z0-9\\s]+[\"][)]";
            reg_table[2] = "end[ ][A-Za-z0-9]+()";

            string[] attr_table = new string[3];
            attr_table[0] = "Start of function definition";
            attr_table[1] = "Print Statement";
            attr_table[2] = "End of function definition";


        // Read file
            TextReader file_r = new StreamReader("file.txt");
            string line;
            while ((line = file_r.ReadLine()) != null)
                for (int i = 0; i < 3; i++)
                {
                    if (Regex.IsMatch(line, reg_table[i]))
                    {
                        Console.WriteLine(line);
                        Console.WriteLine("Matched: " + attr_table[i]);
                        Console.WriteLine();
                    }
                }
            
            file_r.Close();
            Console.Read();
        }
    }
}
