#include<iostream>
#include<cmath>    //for using pow() , sqrt () type functions 
using namespace std;
int main()
{
    //--------------------------------------------------------------------------------------------------

    cout << "Working with random operation : "<<"\n" << endl ;

    cout << 5+7 << endl;         // -> 12
    cout << 4+10*5 << endl;      // -> 54
    cout << (4+10)*5 << endl;    // -> 70
    cout << 10 %3 << endl;       // -> 1
    
    cout << "\n" << endl;

    //--------------------------------------------------------------------------------------------------
    cout << "Working with incremental/decremental operation : " << endl;

    int inum = 5 ;
    int dnum = 8 ;

    inum++;    //Adding 1 to the inum
    dnum--;    //Subtracting 1 from the dnum

    cout << inum << endl;    // -> 6
    cout << dnum << endl;    // -> 7

    inum += 80 ;    //Adds 80 to inum         -> inum = 6 and   6+80 =  86
    dnum -= 50 ;    //Subtract 50 from dnum   -> dnum = 7 and   7-50 = -43
    cout << inum << endl;
    cout << dnum << endl;  
    
    cout << "\n" << endl;

    //--------------------------------------------------------------------------------------------------
    cout << "Working with cmath built in functions : " <<"\n"<< endl;
    cout << "Power and Square Root:"<<"\n" << endl;
    cout << pow(2,5) << endl;   // -> 32 as 2^5 = 32 
    cout << sqrt(36) << endl;   // -> 6 as square root of 36 is 6 

    cout << "\n" <<"Rounding Numbers :"<<"\n" << endl;
    cout << round(4.6) << endl; // Will give the next round number as 4.6 is greater than 4.5
    cout << round(3.2) << endl; // Will give the previous round number 3.2 is less than 3.5
    cout << round(6.5) << endl; // Will give the next round number as it is equal to 6.5
    
    cout << "\n" <<"Ceiling and Floor Value :"<<"\n" << endl;
    cout << ceil(2.1) << endl;  // Will give the ceiling value [next higher value]   -> 3
    cout << floor(3.9) << endl; // Will give the floor value [previous lower value]  -> 3
    
    cout << "\n" <<"Max and Min Value :"<<"\n" << endl;
    cout << fmax(11,65) << endl; // Will give the max value between 2 numbers -> 65
    cout << fmin(11,65) << endl; // Will give the min value between 2 numbers -> 11

    return 0;
}