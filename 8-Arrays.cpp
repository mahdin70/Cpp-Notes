/*
An array is a collection of elements of the same type placed in contiguous memory locations 
that can be individually referenced by using an index to a unique identifier.

Five values of type int can be declared as an array without having to declare five different 
variables (each with its own identifier).

For example, int array[5] = { 25,35,40,45,50};
*/


#include <iostream>
using namespace std;
int main()
{
    int a[] = {5,10,15,20,25};
    int sum = 0;
    
    //sizeof(a)/sizeof(a[0]) defines the number of element in an array 
    for (int i=0 ; i < (sizeof(a)/sizeof(a[0]));i++)  
    {
        //Printing the Array elements
        cout << a[i] << " ";               
        sum+=a[i];
    }

    cout << "\n" << sum <<endl;

    //Modifying the each array element :

    for (int i=0 ; i < (sizeof(a)/sizeof(a[0]));i++)
    {
        a[i] = a[i]+3;              //Adding 3 to each element 
    }
    for (int i=0 ; i < (sizeof(a)/sizeof(a[0]));i++)
    {
       cout <<  a[i] <<" ";         //This will print the modified array. -> 8 13 18 23 28
    }

    return 0;
}





















