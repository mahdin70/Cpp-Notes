/*
The switch statement helps in testing the equality of a variable against a set of values.
Each value under comparison is known as a case.

-> The switch is similar to the if…else…if ladder. However, it generates a cleaner and 
easy-to-understand code. The switch is also faster compared to the if…else…if ladder. 
Use the switch statement when you need to compare the value of a variable against a set
of other values.

-> The break keyword is used inside the switch statement. It prevents the code from running 
into the next case. It terminates a statement sequence.

Syntax : 

switch (variable)
{
    case 1: 
        break;
    case 2: 
        break;
    default: 
}	

Variable: This is the variable for which comparison is to be made.
Case: There are many case statements. Each compares the variable with a different value.
Break: This keyword prevents execution from continuing to the next case statement.
Default: This is optional. It states what should be done, the value of the variable 
         did not match any case.


*/

#include<iostream> 
using namespace std;
int main()
{
	int x = 20;
	switch (x)
	{
	 case 10: cout<<"X is 10"; 
              break;
     case 20: cout << "X is 20";
              break;
     case 30: cout << "X is 30"; 
              break;
     default: cout<<"X is not 10, 20 or 30"; 
              break;
	}
    
	return 0;
}