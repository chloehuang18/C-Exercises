/*******************************************
*.  Copyright (c) <2021> 
*.  Author: Chloe Huang
*.  Created: Mar 30, 2021
*.  Estimate time: 0.2 Hours
*.  All rights reserved.
*   Description: Use 
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

   cin >> simonPattern;
   cin >> userPattern;
   
   //This loop compares two strings and count common characters 
   for(i = 0; i < simonPattern.length(); ++i){
      
         if(simonPattern[i] == userPattern[i]){
               ++userScore;
            }   
   }
   
   //Out put 
   cout << "Simon Says: " << simonPattern << endl;
   cout << "You Say: " << userPattern << endl;
   cout << "Your Score: " << userScore << endl;

   return 0;
}
