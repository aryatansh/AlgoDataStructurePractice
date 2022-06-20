using System;

class GFG
{
    static void printTwoElements(int[] arr, int size)
    {
        int i;
        Console.Write("The repeating element is ");

        for (i = 0; i < size; i++)
        {
            int abs_val = Math.Abs(arr[i]);
            if (arr[abs_val - 1] > 0)
                arr[abs_val - 1] = -arr[abs_val - 1];
            else
                Console.WriteLine(abs_val);
        }

        Console.Write("And the missing element is ");
        for (i = 0; i < size; i++)
        {
            if (arr[i] > 0)
                Console.WriteLine(i + 1);
        }
    }

    // Driver program
    public static void Main()
    {
        int[] arr = { 7, 3, 4, 5, 5, 6, 2 };
        int n = arr.Length;
        printTwoElements(arr, n);
    }
}