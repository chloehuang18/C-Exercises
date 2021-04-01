
// An enumeration type declares a name for a new type and possible values for that type.

#include <iostream>
using namespace std;

int main() {
   enum AcceptedCoins {ADD_QUARTER, ADD_DIME, ADD_NICKEL, ADD_UNKNOWN};
   int totalDeposit;
   int userInput;

   totalDeposit = 0;

   cout << "Add coin: 0 (add 25), 1 (add 10), 2 (add 5).  ";
   cin >> userInput;

   if (userInput == ADD_QUARTER) {
      totalDeposit = totalDeposit + 25;
   }

   /* Your solution goes here  */

   else {
      cout << "Invalid coin selection." << endl;
   }

   cout << "totalDeposit: " << totalDeposit << endl;

   return 0;
}
