using System;
using System.Collections.Generic;

namespace ALlgoDataStructureProject
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack<int> a = new Stack<int>();
            a.Push(2);
            a.Push(3);
            while (a.Count>0)
            {
                Console.WriteLine(a.Pop());
                
            }
            //T
            Queue<int> x = new Queue<int>();
           
              
        }
    } 
}


