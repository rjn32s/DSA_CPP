/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int bit =1010;
    
    int i=0;
    
    ((bit & (1<<i)) !=0)?cout << 1 <<endl:cout << 0 <<endl;

    return 0;
}
