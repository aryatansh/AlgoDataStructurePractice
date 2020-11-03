using System;
namespace ALlgoDataStructureProject.Sorting
{
    public class Sort
    {
        public int[] arr;

        public void InsertionSort()
        {
            int n = arr.Length;
            for (int i = 1; i < n; i++)
            {
                int e = arr[i];
                int j = i - 1;
                while (j>=0 && arr[j] > e)
                {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = e;
            }
        }

        public void BubbleSort()
        {
            int n = arr.Length;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n-i-1; j++)
                {
                    if(arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }

        public void SelectionSort()
        {
            int n = arr.Length;
            for (int i = 0; i < arr.Length; i++)
            {
                int smallest = i;
                for (int j = i+1; j < arr.Length; j++)
                {
                    if (arr[j] < arr[smallest])
                    {
                        smallest = j;
                    }
                }
                int temp = arr[smallest];
                arr[smallest] = arr[i];
                arr[i] = temp;
            }
        }
    }
    }

