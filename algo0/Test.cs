using System;

namespace ConsoleApp1
{
    class Test
    {
        static void Main(string[] args)
        {
            int a = 10;
            int b = 20;

            swap(ref a, ref b);


            Console.WriteLine("a:" + a + " b:" + b);
        }

        static void swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
    }
}
