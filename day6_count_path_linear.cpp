/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int countpath(int s ,int e){
    if (s==e){
        return 1;
        
    }
    if (s>e){
        return 0;
    }
    int cout =0;
    
    for (int i=1;i <=6;i++){
        cout +=countpath(s+i,e);
    }
    
    return cout;
    
    
}

int main()
{

    cout<<countpath(0,6);
    return 0;
}

