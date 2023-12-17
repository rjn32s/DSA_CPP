/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int numOnes(int n){
    int count =0;
    while (n) {
        n = n & (n-1);
        count++;
    }
    
    return count;
}


int main()
{
    int bit =19;
    
    cout <<numOnes(bit)<<endl;
    
//    ((bit & (1<<i)) !=0)?cout << 1 <<endl:cout << 0 <<endl;

    return 0;
}
