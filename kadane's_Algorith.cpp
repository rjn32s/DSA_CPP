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

  int currSum = 0;
  int maxSum = -199999;
  //currSum[0] = 0;

  for (int i = 0; i < n; i++)
    {
      currSum = currSum + arr[i];

      if (currSum < 0)
	{
	  currSum = 0;
	}
      maxSum = max (maxSum, currSum);

    }





  cout << " Max sum array  " << maxSum << endl;

  return 0;
}
