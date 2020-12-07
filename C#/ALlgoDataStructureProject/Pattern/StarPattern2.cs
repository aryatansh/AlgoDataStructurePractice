using System;
namespace ALlgoDataStructureProject.Pattern
{
	public class StarPattern2
	{
		
        public void CreateStarPattern()
        {
            int a = 1;
            a = Convert.ToInt32(Console.ReadLine());
            for (int i = 1; i <= a; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    Console.Write(j);
                }
                for (int j = i + 1; j <= a; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
		
	}
}
