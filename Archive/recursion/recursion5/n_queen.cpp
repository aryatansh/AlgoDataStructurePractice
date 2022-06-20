#include<iostream>

using namespace std;

bool isQSafe(int board[][10],int n, int x,int y){
    for (int i = x-1; i >= 0; i--)
    {
        if(board[i][y]==1){
            return false;
        }
    }
    int i=x;
    int j=y;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
    }
    i--;
    j--;
    }
    i=x;
    j=y;
    while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    return true;
    
}

bool solveNQueen(int board[][10],int n,int x){
    //Base Case
    if(x==n){
         for (int i = 0; i < n; i++)
         {
            for (int j = 0; j < n; j++)
            {
                if(board[i][j]==1){
                    cout<< 'Q';
                }
                else{
                    cout<< '_';
                }
                cout<<' ';
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        //return true;
    }
    //Recursive case
    for (int j = 0; j < n; j++)
    {
        if(isQSafe(board,n,x,j)){
            board[x][j]=1;
            bool isSolved=solveNQueen(board,n,x+1);
            if(isSolved){
                return true;
            }
            board[x][j]=0;
        }
    }
    return false;
}

int main(){
    int n=4;
    int board[10][10]={0};
   // cin>>n;
    solveNQueen(board,n,0);
    return 0;
}