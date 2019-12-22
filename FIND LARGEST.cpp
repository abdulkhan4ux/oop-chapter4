#include <iostream>

using namespace std;

int main() {

   int counter;
   int largest1;
int largest2;
   while ( counter <= 10 ) {

      int number;

      cout << "Number " << counter << ": ";
      cin >> number;

      if ( number > largest1  )
         {
	
		 largest1 = number;}
         else if (number>largest2)
		 {
		 
		 largest2= number;}
counter++;
   }

   cout << "Largest number is " << largest1 << endl;
cout << "second largest number is " << largest2 << endl;
   return 0;
}
