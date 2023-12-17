/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int fibo(int n){
    if (n ==0){
        return 0;
        
    }
    if (n ==1){
        return 1;
    }
    
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    cout<<fibo(4)<<endl;

    return 0;
}
