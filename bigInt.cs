using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;


namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            Program p1 = new Program();
            string num1 = "91234817236847123971623974128763459172354917236549123654192354912";
            string num2 = "7235497126349817236491827349182364918273649172364912";
            Console.WriteLine("\n{0} \n* \n{1} \n= \n{2}",num1,num2,p1.MultBigInt(num1,num2));
            Console.WriteLine("\n\n\n\n{0} \n+ \n{1} \n= \n{2}", num1, num2, p1.AddBigInt(num1,num2));
            Console.Read();

        }

        BigInteger MultBigInt(string b1, string b2)
        {
            return (BigInteger.Parse(b1) * BigInteger.Parse(b2));
        }

        BigInteger AddBigInt(string b1, string b2)
        {
            return (BigInteger.Parse(b1) + BigInteger.Parse(b2));
        }

    }
}
