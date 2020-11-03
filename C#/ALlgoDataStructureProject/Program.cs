using System;
using System.Collections.Generic;
using ALlgoDataStructureProject.LeetCode.Easy;
using ALlgoDataStructureProject.Sorting;

namespace ALlgoDataStructureProject
{
    class Program
    {
        static void Main(string[] args)
        {

            int[] a = { 4,5,2,1,3 };
            Sort s = new Sort();
            s.arr = a;
            s.BubbleSort();
            for (int i = 0; i < s.arr.Length; i++)
            {
                Console.WriteLine(s.arr[i]);
            }

        }
    } 
}


