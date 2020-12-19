// Worst Case Time Complexity [ Big-O ]: O(n2)
// Best Case Time Complexity [Big-omega]: O(n)
// Average Time Complexity [Big-theta]: O(n2)
// Space Complexity: O(1)

#include<iostream>

using namespace std;

void bubble_sort(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        
    }
    
}

int main(){
     int arr[]={5,4,3,1,2};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}