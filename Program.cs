using System;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter your height: ");

            if (double.TryParse(Console.ReadLine(), out double height))
            {
                Console.WriteLine("Your height is: " + height);
            }
            else
            {
                Console.WriteLine("Invalid input");
            }
        }
    }
}

