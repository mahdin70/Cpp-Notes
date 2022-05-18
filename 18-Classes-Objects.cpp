/*
Class is a template of a object and a object is a instance of a Class.

Class : Car 
Object : Toyota
         Volvo
         Lamborghini

A Class Contains :
                  Class Name 
                  Access Specifier 
                  Attributes 
                  Methods 

Attributes and methods are basically variables and functions that belongs to the class. 
These are often referred to as "Class Members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, 
or a "blueprint" for creating objects.
*/
#include <iostream>
using namespace std;

class Car         
{        
  public:          
    string brand;  
    string model;  
    int year;      
    Car(string x, string y, int z)   // Constructor with parameters
    {  
      brand = x;
      model = y;
      year = z;
    }
};

class Fruit 
{        
  public:          
    string Name;  
    string Color;  
    string Origin;      
    Fruit(string x, string y, string z);               // Constructor declaration
};

// Constructor definition outside the class

Fruit::Fruit(string Name, string Color, string Origin) 
{
  Name = Name;
  Color = Color;
  Origin = Origin;
}

int main() 
{
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  Fruit obj1("Mango","Yellow","India");
  Fruit obj2("Orange","Red","Japan");

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

  cout << obj1.Name << " " << obj1.Color << " " << obj1.Origin << endl;
  cout << obj2.Name << " " << obj2.Color << " " << obj2.Origin << endl;

  return 0;
}

