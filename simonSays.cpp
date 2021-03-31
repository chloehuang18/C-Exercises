/*******************************************
*.  Copyright (c) <2021> 
*.  Author: Chloe Huang
*.  Created: Mar 30, 2021
*.  Estimate time: 0.2 Hours
*.  All rights reserved.
*   Description: Simon Says is a memory game. Create a for loop that compares the two strings starting from index 0. 
*   For each match, add one point to userScore.
*
******************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore;
   int i;

   userScore = 0;
   
   //Get input from the user
   cout << "Simon Says" << endl;
   cin >> simonPattern;
   cout << "You Says" << endl;
   cin >> userPattern;
   
   //This loop compares two strings and count common characters 
   for(i = 0; i < simonPattern.length(); ++i){
      
         if(simonPattern[i] == userPattern[i]){
               ++userScore;
            }   
   }
   
   //Output 
   cout << "Your Score: " << userScore << endl;

   return 0;
}
