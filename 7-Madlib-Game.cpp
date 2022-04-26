#include<iostream>
using namespace std;
int main()
{
    string Color,PluralNoun,Celebrity;
    cout << "Enter a Color : ";
    getline (cin, Color);
    cout << "Enter a Plural Noun : ";
    getline (cin, PluralNoun);
    cout << "Enter a Celebrity's Name : ";
    getline (cin,Celebrity);

    cout << "Roses are "<< Color <<endl;
    cout << PluralNoun << " are Blue" <<endl;
    cout << "I Love " << Celebrity <<endl;

    return 0;
}s