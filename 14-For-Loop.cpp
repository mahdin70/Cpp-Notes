#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int sum = 0;
  for ( int i =0; i <= 100 ; i++)
  {
     sum+=i;
  }
  cout<< sum << endl;

  for (int i = 0 ; i < 10 ; i++) 
  {
    if (i == 4)               // Control Statement : Controls the loop execution
     {
       break;                 // Breaks the loop when i == 4
     }
    cout << i << " ";
  } 
  
  cout << "\n";

  /*The continue statement breaks one iteration (in the loop), if a specified condition occurs, 
    and continues with the next iteration in the loop.*/

  for (int i = 0 ; i < 20 ; i++)
  {
      if ( i > 5 && i < 8)    // This will skip the the values 6 and 7 and it is also a control statement
      {
          cout << "Skip ";    // Wil print skip instead of 6,7
          continue;
      }
      cout << i << " ";
  }
  return 0;
}



















































