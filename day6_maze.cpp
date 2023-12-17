/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int maze(int n ,int i,int j){
    if (i==n-1 && j == n-1){
        return 1;
        
    }
    if (i>n || j >n){
        return 0;
    }
    //int cout =0;
    
    
    return maze(n,i+1,j) + maze(n,i,j+1);
    
    
}

int main()
{

    cout<<maze(3,0,0);
    return 0;
}

