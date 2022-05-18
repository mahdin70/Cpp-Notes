// A pointer however, is a variable that stores the memory address as its value.
 # include <bits/stdc++.h>
 using namespace std;
 int main()
 {
     string name = "Mukit";
     string* ptr = &name;

     cout << name << endl;   // Mukit
     cout << ptr << endl;    // 0x61fde0
     cout << &name << endl;  // 0x61fde0


     cout << *ptr << endl;   // This is called dereferencing which will print the value to which the pointer points 

     string q = *ptr;        // Dereferenced to the original value 
     cout << q << endl;

 }
