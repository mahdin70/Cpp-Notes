/*
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To declare an array, define the variable type, specify the name of the array followed by square brackets and 
specify the number of elements it should store
*/

# include <bits/stdc++.h>
using namespace std;
int main()
{
    string fruits[] = {"Apple","Banana","Mango","Orange","Berry"};
    for(int i = 0 ; i < sizeof(fruits)/sizeof(fruits[0]) ; i++)
    {
        cout << fruits[i] << endl;
    }

/*
Output :
Apple
Banana
Mango
Orange
Berry
*/


// Multidimensional Array :

int num[2][4] = {{1,2,3,4},
                 {5,6,7,8}};

// Accessing Array Element:
cout << num [0][2] << endl;    // Row 1 Column 3

cout<<"\n";

for (int i = 0 ; i < 2 ; i++)
{
    for (int j = 0 ; j < 4 ; j++)
    {
       cout<< num [i][j] <<endl;        // Prints all elements if the multidimensional array
    }
}
    return 0;
}























