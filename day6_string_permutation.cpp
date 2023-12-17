/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
void perm(string s, string ans ){
    // Base case
    
    if (s.length() == 0){
        cout<<ans<<endl;
    }
    
    for (int i =0; i<s.length();i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        perm(ros,ans+ch);
    }
    
    
}

int main()
{

    perm("ABC","");
    return 0;
}

