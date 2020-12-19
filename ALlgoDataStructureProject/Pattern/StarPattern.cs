using System;
namespace ALlgoDataStructureProject.Pattern
{
    public class StarPattern
    {
        //1 2 3 4 5
        //1 2 3 4 * 
        //1 2 3 * * *
        //1 2 * * * * *
        //1 * * * * * * *
        public void CreateStarPattern()
        {
            int count = 1;
            count = Convert.ToInt32(Console.ReadLine());
            int k = 1;
            int c = count;
            for (int i = 1; i <= count; i++)
            {
                for (int j = 1; j <= c; j++)
                {
                    Console.Write(j+ " ");
                }
                if (i > 1)
                {
                    for (int j = 0; j < k; j++)
                    {
                        Console.Write("*" +" ");
                    }
                    k = k + 2;
                }
                c--;
                Console.WriteLine();
            }
        }
    }
}

