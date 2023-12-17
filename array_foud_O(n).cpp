/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=3,m=3;
    int k=10;
    int arr[n][m] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int r=0,c=0;
    
    while( r<=n && c <=m){
        if (arr[r][c] == k){
            cout << " Element found"<<endl;
            return 1;
        }
        else if (arr[r][c] > k)
            c--;
        else
            r++;
    }
    cout << "Element not found"<<endl;
    return -1;
}
