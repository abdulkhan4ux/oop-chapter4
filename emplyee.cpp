#include <iostream>

using namespace std;

int main() {

   double hours;

  

   cout << "Enter number of hours worked (-1 to end): ";
   cin >> hours;

   while ( hours != -1 ) {

      cout << "Accrued leave: " << 2 + hours * 0.1 << " hours";
         cout<< "\nEnter number of hours worked (-1 to end): ";
      cin >> hours;
   }

   return 0;
}
