// Worst Case Time Complexity [ Big-O ]: O(n2)
// Best Case Time Complexity [Big-omega]: O(n2)
// Average Time Complexity [Big-theta]: O(n2)
// Space Complexity: O(1)
#include <iostream>

using namespace std;
void selection_sort(int* a,int n){
    int i=0;
     for (int i = 0; i < n-1; i++)
    {

            int min_index=i;
        for (int j = i; j < n; j++)
        {
            if(a[j]<a[min_index]){ 
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
        
    }
    
    
}

int main(){
    
    int arr[]={5,4,3,1,2};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}