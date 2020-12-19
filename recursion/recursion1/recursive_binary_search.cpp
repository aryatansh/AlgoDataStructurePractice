//Recursive function to perform binary search

#include<iostream>

using namespace std;

int binarySearch(int* n,int search,int l,int r){
    if(r>=l){
        int mid=l+(r-1)/2;
        cout<<"l,r,mid"<<" "<<l<<" "<<mid<<" "<<r<<"\n";
        if(n[mid]==search){
            return mid;
        }
        else if(n[mid]>search){   
            return binarySearch(n,search,l,mid-1);
        }
        else{
            return binarySearch(n,search,mid+1,r);
        }
    }

}
int main(){
    int arr[]={1,2,3,4,5,10,20};
    int search=5;
    int size=sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,search,0,size-1);
    return 0;
}