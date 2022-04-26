/*
The ability to control the flow of your program, letting it make decisions on 
what code to execute, is valuable to the programmer. The if statement allows 
you to control if a program enters a section of code or not based on whether 
a given condition is true or false. One of the important functions of the 
if statement is that it allows the program to select an action based upon the 
user's input. 
For example, by using an if statement to check a user entered password, 
your program can decide whether a user is allowed access to the program.

the structure of an if statement is as follows:

if ( TRUE )
   {Execute the next statement}

Here is a simple example that shows the syntax:
if ( 5 < 10 )
  { cout<<"Five is now less than ten, that's a big surprise"; }
*/
//*****************************************************************************************

/*
Else : 
Sometimes when the condition in an if statement evaluates to false, it would be nice to 
execute some code instead of the code executed when the statement evaluates to true. 
The "else" statement effectively says that whatever code after it (whether a single line or 
code between brackets) is executed if the if statement is FALSE.

It can look like this:

if ( TRUE ) 
{
  // Execute these statements if TRUE
}
else 
{
  // Execute these statements if FALSE
}

Else If
Another use of else is when there are multiple conditional statements that may all evaluate
to true, yet you want only one if statement's body to execute. You can use an "else if" 
statement following an if statement and its body; that way, if the first statement is true,
the "else if" will be ignored, but if the if statement is false, it will then check the 
condition for the else if statement. If the if statement was true the else statement will not
be checked. It is possible to use numerous else if statements to ensure that only one block 
of code is executed.

if ( <condition> ) 
{
  // Execute these statements if <condition> is TRUE
}
else if ( <another condition> ) 
{
  // Execute these statements if <another condition> is TRUE and
  // <condition> is FALSE
}


*/
#include <iostream>   
 
using namespace std;
         
int main()                           
{
  int age;                            
  cout<<"Please input your age: ";    
  cin>> age;   

  if ( age < 100 ) 
  {                  
     cout<<"You are pretty young!" <<endl; 
  }
  else if ( age == 100 ) 
  {             
     cout<<"You are old ." <<endl;           
  }
  else 
  {
    cout<<"You are really old " <<endl;     
  }
  
  return 0;
}