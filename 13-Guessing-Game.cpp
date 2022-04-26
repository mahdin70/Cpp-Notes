#include<iostream>
using namespace std;
int main()
{
    int secretnum = 7;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    bool outofGuesses = false;

    while(secretnum != guess && !outofGuesses)
    {
      if(guesscount < guesslimit)
        {
          cout << "Enter a Guess :";
          cin >> guess;
          guesscount++;
        }
      else
        {
            outofGuesses = true;
        }
    }

    if(outofGuesses)
    {
        cout << "You Loose" <<endl;
    }
    else
    {
        cout << "You Win" << endl;
    }
}