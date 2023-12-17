/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int unique(int arr[],int n){
    int xorsum = 0;
    for (int i=0; i <n;i++){
        xorsum = xorsum^arr[i];
        }
        return xorsum;
    }



int main()
{
    int bit =19;
    int arr[7] = {1,2,3,4,3,2,1};
    cout<<unique(arr,7)<<endl;
    
//    ((bit & (1<<i)) !=0)?cout << 1 <<endl:cout << 0 <<endl;

    return 0;
}
