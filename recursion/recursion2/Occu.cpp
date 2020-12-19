// Find first occurence of key using linear search

#include <iostream>

using namespace std;


//Last Occurence
int lastOcc(int *a, int n, int key){
   if(n==0){
       return -1;
   }
   int i=lastOcc(a+1,n-1,key);
   if(i==-1){
        if(a[i]==key){
            return 0;
        }
        else
        {
            return -1;
        }
        
   }
   return i+1;
}

//First Occurence
int firstOcc(int *a,int n, int key){
  if(n==0){
      return -1;
  }
  if(a[0]==key){
      return 0;
  }
  int i=firstOcc(a+1,n-1,key);
  if(i==-1){
      return -1;
  }
  return i+1;
}

//Linear Search
int linearSearch(int *a, int n, int key, int i){
    if(n==i){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return linearSearch(a,n,key,i+1);
    
}

int main(){
    int arr[]={1,2,3,7,4,5,6,7,10};
    int key=7;
    int n=sizeof(arr)/sizeof(int);
    cout<<firstOcc(arr,n,key)<<'\n';
    cout<<linearSearch(arr,n,key,0)<<'\n';

    return n;
}