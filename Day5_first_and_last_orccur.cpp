/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int firstoccr(int arr[],int n,int i,int key){
    if (i ==n){
        return -1;
    }
    if (arr[i] == key){
        return i;
    }
    
    return firstoccr(arr,n,i+1,key);
}

int lastoccr(int arr[],int n,int i,int key){
    int foundarr = lastoccr(arr,n,i+1,key);
    if (foundarr !=-1){
        return foundarr;
    }
    if (arr[i] == key){
        return i;
    }
    return -1;
}
int main()
{
    cout<<"Hello World";
    int arr[] = {4,1,2,5,3,2,5,1};
    
    cout << firstoccr(arr,8,0,2)<<endl;
    cout << lastoccr(arr,8,0,2)<<endl;

    return 0;
}
