# include <bits/stdc++.h>
using namespace std;
int main()
{
    bool ships[4][4] = {{ 0, 1, 1, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 1, 0 },
                        { 0, 0, 1, 0 }};

// Keep track of how many hits the player has and how many turns they have played in these variables
   int hits = 0;
   int numberOfTurns = 0;

   while (hits < 4) // Allow the player to keep going until they have hit all four ships
   {
     int row, column;

     cout << "Selecting coordinates\n";
     cout << "Choose a row number between 0 and 3: ";    // Ask the player for a row
     cin >> row;
     cout << "Choose a column number between 0 and 3: "; // Ask the player for a column
     cin >> column;

     if (ships[row][column])       // Check if a ship exists in those coordinates
     {
       ships[row][column] = 0;     // If the player hit a ship, remove it by setting the value to zero.
       hits++;                     // Increase the hit counter
       cout << "Hit! " << (4-hits) << " left.\n\n";  // Tell the player that they have hit a ship and how many ships are left
     } 
     else 
     {
       cout << "Miss\n\n";  // Tell the player that they missed
     }
     numberOfTurns++;       // Count how many turns the player has taken
   }
   cout << "Victory!\n";
   cout << "You won in " << numberOfTurns << " turns";

   return 0;
}