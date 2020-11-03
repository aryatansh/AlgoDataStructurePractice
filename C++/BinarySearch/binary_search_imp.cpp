//This is an implementation of Binary Search

#include<iostream>


using namespace std;

int binary_search(int arr[],int n,int key){
        int start=0;
    int end=n-1;
while (start<=end)
{
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    
}
return -1;

}

int main(){
    int n=100; 
    int key=5;
    int arr[1000];
    for (int i = 0; i < 100; i++)
    {
        arr[i]=i;
    }
    int i=binary_search(arr,n,key); 
    cout<<i;  
    return 0;
}