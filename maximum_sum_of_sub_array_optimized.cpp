/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cout << "Enter the number of elements in array" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the array elements " << endl;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  // Now main logic
  //int sum;

  int currSum[n + 1];
  currSum[0] = 0;

  for (int i = 1; i <= n; i++)
    {
      currSum[i] = currSum[i - 1] + arr[i - 1];
    }



  int maxSum = -199999;
  for (int i = 1; i <= n; i++)
    {
      int sum = 0;
      for (int j = 0; j < i; j++)
	{
	  //for(int k=i;k<j;k++)
	  sum = currSum[i] - arr[j];
	  maxSum = max (maxSum, sum);


	}
      // maxSum = max(maxSum,sum);

    }

  cout << " Max sum array  " << maxSum << endl;

  return 0;
}
