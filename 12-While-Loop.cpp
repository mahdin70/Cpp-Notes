/*
In C++, while loop is used to iterate a part of the program several times. If the number of
iteration is not fixed, it is recommended to use while loop than for loop.

while(condition)
{    
   code to be executed    
}   

*/

// Simple C++ Program using while loop :
// This Program will print the numbers from 1 to to 10

#include <iostream>  
using namespace std;  
int main() 
{         
  int i=1;      
  while(i<=10)   
   {      
     cout<<i <<" ";    
     i++;  
   }       
}



/* Nested While Loop : 
In C++, we can use while loop inside another while loop, it is known as nested while loop. 
The nested while loop is executed fully when outer loop is executed once.
*/

#include <iostream>  
using namespace std;  
int main () 
{  
   int i=1;      
   while(i<=3)     
    {    
      int j = 1;    
      while (j <= 3)    
       {      
         cout<<i<<" "<<j<<"\n";      
         j++;  
       }     
         i++;  
    }  
}    

Output :

1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3

/*
do-while loop in C++ :
Here's the basic syntax for a do while loop:

do 
{
  body of the loop
}
while (condition);


-> Note that the test of the termination condition is made after each execution of the loop. 
This means that the loop will always be executed at least once,even if the condition is 
false in the beginning.

This is in contrast to the normal while loop, where the condition is tested before the loop,
and an execution of the code block is not guaranteed.

*/

#include <iostream>
int main () 
{
   int number = 1;
   do 
    {
      cout << number <<endl;
      number++;
    }
    while (number < 5);
    return 0;
}

Output :

1
2
3
4