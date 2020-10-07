using System;
using ALlgoDataStructureProject.DataStructure.LinkedList;

namespace ALlgoDataStructureProject
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("test");
            LinkedList<int> ls = new LinkedList<int>();
            ls.InsertElementToEnd(5);
            ls.InsertElementToEnd(6);
            ls.InsertElementToEnd(7);
            var x = ls.ValueAt(2);
            var y = ls.PopFirstElement();
            Console.WriteLine("Value at index: "+x);
            Console.WriteLine("Head Popped"+y);
            ls.InsertElementAtStart(4);
            ls.InsertElementToEnd(8);
            ls.PrintElements();
            Console.WriteLine("Last Element: "+ls.GetLastElement());
            ls.RemoveItemWithValue(7);
            Console.WriteLine("2nd Item from Last: "+ls.ValueNFromEnd(2));
            ls.PrintElements();
            ls.ReverseLinkedList();
            ls.PrintElements();
            Console.ReadLine();
        }
    } 
}
