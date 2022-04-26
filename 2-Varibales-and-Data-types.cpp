
//Variable is like a container which contains some data of specific data types assigned to it 
//Capacity of a variable depends on the data type it is holding 


/*
Data Type	    Meaning	              Size (in Bytes)
int             Integer	                2 or 4
float	        Floating-point	          4
double	        Double Floating-point	  8
char	        Character	              1
wchar_t	        Wide Character	          2
bool	        Boolean	                  1
void	        Empty	                  0



We can further modify some of the fundamental data types by using type modifiers. There are 4 type modifiers in C++. They are:

1. signed
2. unsigned
3. short
4. long

We can modify the following data types with the above modifiers:
-> int
-> double
-> char

*/

//Working with variables in C++

#include<iostream>
using namespace std;
int main()
{
    string name1 = "John";
    string name2 = "Jenny";
    cout << "He is my friend "<< name1 << endl;
    cout << name1 << " is the most meritorious boy of our class" << endl;
    cout << name1 << " has a sister named " << name2 << endl;
}

/* Output :
 He is my friend John
 John is the most meritorious boy of our class
 John has a sister named Jenny
*/






