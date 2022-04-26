#include<iostream>
using namespace std;
int main()
{
    string pera = "Flocchinauchinihilipilification";
    cout<< pera.length() << endl; //will print the length of the string
    cout<< pera[10] <<endl;       //will print the 10th index of the string which is "h"

    pera[0] = 'M' ;               //Modifying the Oth index of the string
    cout<< pera <<endl;           //Printing the modified string
    
    cout<< pera.find("nauchini",0) << endl;  
    //Here the find() function will look for "nauchini" from the index position 0 of the string and give us the index position where "nauchini" started 

    cout<< pera.substr(15,4) << endl;
    //Here the substr() function will print a substring containing "4" characters from the index position of 15 of the given string "pera"

    return 0;
}