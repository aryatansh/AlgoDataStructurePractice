#include <iostream>
#include <cmath>

using namespace std;

bool canPlace(int mat[][9],int i,int j,int n,int num ){
    for (int x = 0; x < n; x++)
    {
        if(mat[x][j]==num || mat[i][x]==num){
            return false;
        }
    }
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;
    for (int x = sx; x < sx+rn; x++)
    {
        for (int y = sy; y < sy+rn; y++)
        {
            if(mat[x][y]==num){
                return false;
            }
        }
        
    }
    return true;
    
    
}

bool solveSudoku(int mat[][9],int i,int j,int n ){
    if(i==n){
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                cout<<mat[x][y]<<" ";
            }
            cout<<endl;
            
        }
        
        
        return true;
    }
    //Move to next row if current cell reaches to the end of column
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
        
    }
    //Skip the prefilled cell
    if(mat[i][j]!=0){
        return solveSudoku(mat,i,j+1,n);
    }
    for (int num = 0; num <=9; num++)
    {
        if(canPlace(mat,i,j,n,num)){
            mat[i][j]=num;
            bool isSolved=solveSudoku(mat,i,j+1,n);
            if(isSolved==true){
                return true;
            }

        }
    }
    mat[i][j]=0;
    return false;
    //BAcktrack
    
}


int main(){
    int mat[9][9]=
    {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };
    solveSudoku(mat,0,0,9);
    return 0;
}