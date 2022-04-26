#include<iostream>
using namespace std;
int main()
{  
    // Taking integer as input 
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "You are " << age <<" years old." <<endl;

    // Taking strings as inout 
    string name;
    cin >> name ;        // cin will only take the string before the first space
    cout << "Hello, Mr. " << name <<endl;
    cout << "Using getline() now :" <<endl;
    string name2;
    getline(cin, name2);   // To get the whole line with what spaces 
    cout << "Hello, Mr. " << name2 <<endl;
    
    return 0;
}

