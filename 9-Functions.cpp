/*
A function in C++ is a group of statements that together perform a specific task.
The main part of functions is :
1.Return_type
2.Function_name
3.Parameter
4.Functions body

It's basically a container of instructions/codes which you can use anywhere of your code 

The Basic syntax of the function is :

Return_type Function_name (Parameters)
{
    Function Body
}

*/

#include<iostream>
using namespace std;
//**************************************************************************************************
int sum (int a,int b)     // It's a simple C++ function which sums up two numbers 
{
    return a+b;
}

//**************************************************************************************************
// there can be "void" type function which won't return anything but does some specific work 

void SayHello()
{
    cout << "Hola Amigos" <<endl;
}

//**************************************************************************************************
// there can be void functions with some parameters 

void SayHello(string name, int age)  // This is called method overloading , same function ,Different Parameters
{
    cout << "Hello " << name << ". I know you are "<< age <<" years old!" <<endl;
}

//**************************************************************************************************

int main()
{
    int s = sum(8,10);      // This will call the Sum Function 
    SayHello();             // This will call the SayHello() Function and print the inner content
    SayHello("John",45);    // Calling the overloaded SayHello() function with parameters 
    cout << s << endl;

    return 0;
}



// Function's return type is the most important while writing a function 
// It can be any of the C++ data types i.e. int,float,string,double etc.
// If a return statement is defined , the function will call only that statement
// We won't get any outputs other than the return statement.
// Also,if there is a return statement, there must be a return type in that function definition 












