/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


bool isSafe(int **arr , int x, int y, int n){
    if (x < n && y < n && arr[x][y] ==1){
        return true;
    }
     return false;
}


bool ratmaze(int **arr, int x, int y, int n, int **SolArr){
    if ((x == (n-1)) && (y == (n-1))){
        SolArr[x][y] =1;
        return true;
    }
    
    if (isSafe(arr,x,y,n)){
        SolArr[x][y] =1;
        if(ratmaze(arr,x+1,y,n,SolArr)){
            return true;
        }
        if(ratmaze(arr,x,y+1,n,SolArr)){
            return true;
        }
        
        SolArr[x][y] = 0; // Backtracking 
        return false;
    }
    return false;
}

int main()
{
    int n =5;
    int** arr=new int*[n];
    for (int i =0; i <n; i++){
        arr[i] = new int[n];
    }
    
    for (int i =0; i <n; i++){
    for (int j =0; j<n;j++){
        cin>>arr[i][j];
        
    }
    } 
    
    int** SolArr=new int*[n];
    for (int i =0; i <n; i++){
        SolArr[i] = new int[n];
        for (int j =0; j<n;j++){
            SolArr[i][j]=0;
        }
    }
    
    if (ratmaze(arr,0,0,n,SolArr)){
            for (int i =0; i <n; i++){
                for (int j =0; j<n;j++){
                    cout<<arr[i][j]<<" ";
        
                }cout<<endl;
        } 
    }
    
    return 0;
}
