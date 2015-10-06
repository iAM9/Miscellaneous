/*
A small program I made for solving PLA problems in our 
machine learning class.

It outputs to a console as well as a text file

- Ibrahim Asif Mirza

*/

using System;
using System.IO;

namespace ml_pla
{
	class Program
	{
		static void Main(string[] args)
		{
			double w0, w1, w2, dn;
			double x1, x2;
			double fnet;
			double alpha;
			int iterations;
			StreamWriter write = new StreamWriter("output.txt");

            Console.WriteLine("Enter w0: ");
            w0 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter w1: ");
            w1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter w2: ");
            w2 = Convert.ToDouble(Console.ReadLine());
            
			Console.WriteLine ("Enter d(n): ");
			dn = Convert.ToDouble(Console.ReadLine());

			Console.WriteLine ("Enter alpha: ");
			alpha = Convert.ToDouble (Console.ReadLine ());

			Console.WriteLine ("Enter number of iterations: ");
			iterations = Convert.ToInt16 (Console.ReadLine ());

			for (int i = 1; i <= iterations; i++)
			{
				Console.Clear();
				Console.WriteLine("Iteration: " + i);
				Console.WriteLine("w0: {0}\nw1: {1}\nw2: {2}\n", w0, w1, w2);
				Console.WriteLine("Enter x1: ");
				x1 = Convert.ToDouble(Console.ReadLine());
				Console.WriteLine("Enter x2: ");
				x2 = Convert.ToDouble(Console.ReadLine());
				Console.WriteLine("Enter d(n): ");
				dn = Convert.ToDouble(Console.ReadLine());
				fnet = w0 + (w1 * x1) + (w2 * x2);
				Console.WriteLine("Iteration: " + i);
				write.WriteLine("Iteration: " + i);
				Console.WriteLine();
				write.WriteLine();
				Console.WriteLine("w0: {0}, w1: {1}, w2: {2}", w0, w1, w2);
				write.WriteLine("w0: {0}, w1: {1}, w2: {2}", w0, w1, w2);
				Console.WriteLine();
				write.WriteLine();
				Console.WriteLine("x1: {0}, x2: {1}", x1, x2);
				write.WriteLine("x1: {0}, x2: {1}", x1, x2);
				Console.WriteLine();
				write.WriteLine();
				Console.WriteLine("f(net) = w0 + (w1 * x1) + (w2 * x2");
				write.WriteLine("f(net) = w0 + (w1 * x1) + (w2 * x2");
				Console.WriteLine("f(net) = {0} + ({1} * {2}) + ({3} * {4})",w0,w1,x1,w2,x2);
				write.WriteLine("f(net) = {0} + ({1} * {2}) + ({3} * {4})", w0, w1, x1, w2, x2);
				Console.WriteLine("f(net) = " + fnet);
				write.WriteLine("f(net) = " + fnet);
				Console.WriteLine();
				write.WriteLine();
				Console.WriteLine("\n");
				write.WriteLine("\n");
				if (Math.Sign(fnet) !=  Math.Sign(dn))
				{
					Console.WriteLine("f(net) > 0");
					write.WriteLine("f(net) > 0");
					Console.WriteLine("f(net) != d(n)");
					write.WriteLine("f(net) != d(n)");
					Console.WriteLine("Wrong classification!");
					Console.WriteLine("Updating weights: ");
					write.WriteLine("Wrong classification!");
					write.WriteLine("Updating weights: ");
					Console.WriteLine();
					write.WriteLine();



					Console.WriteLine("w0 = w0 + (alpha * d(n)) * 1");
					Console.WriteLine("w0 = {0} + ({1} * {2}) * 1",w0,alpha,dn);
					write.WriteLine("w0 = w0 + (alpha * d(n)) * 1");
					write.WriteLine("w0 = {0} + ({1} * {2}) * 1", w0, alpha, dn);
					w0 = w0 + (alpha * dn) * 1;
					Console.WriteLine("w0 = " + w0);
					write.WriteLine("w0 = " + w0);

					Console.WriteLine();
					write.WriteLine();

					Console.WriteLine("w1 = w1 + (alpha * d(n)) * x1");
					Console.WriteLine("w1 = {0} + ({1} * {2}) * {3}", w1, alpha, dn, x1);
					write.WriteLine("w1 = w1 + (alpha * d(n)) * x1");
					write.WriteLine("w1 = {0} + ({1} * {2}) * {3}", w1, alpha, dn, x1);
					w1 = w1 + (alpha * dn) * x1;
					Console.WriteLine("w1 = " + w1);
					write.WriteLine("w1 = " + w1);

					Console.WriteLine();
					write.WriteLine();

					Console.WriteLine("w2 = w2 + (alpha * d(n)) * x2");
					Console.WriteLine("w2 = {0} + ({1} * {2}) * {3}", w2, alpha, dn, x2);
					write.WriteLine("w2 = w2 + (alpha * d(n)) * x2");
					write.WriteLine("w2 = {0} + ({1} * {2}) * {3}", w2, alpha, dn, x2);
					w2 = w2 + (alpha * dn) * x2;
					Console.WriteLine("w2 = " + w2);
					write.WriteLine("w2 = " + w2);

					Console.WriteLine();
					write.WriteLine();
					write.WriteLine("----------------------------------------------------------");
					Console.WriteLine("w0: {0}\nw1: {1}\nw2: {2}", w0, w1, w2);
					Console.ReadLine();
				}
				else if (Math.Sign(fnet) == Math.Sign(dn))
				{
					Console.WriteLine("Correct classification: " + fnet);
					write.WriteLine("Correct classification: " + fnet);
					write.WriteLine("----------------------------------------------------------");
					Console.ReadLine();


				}
			}
			write.Close();
			Console.ReadLine();
		}
	}
}
