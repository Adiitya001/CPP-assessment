#include <iostream>
using namespace std;
 
 int main() {
  
 int x = 7;

 cout << "x: " << x << endl;

 cout << "Post-increment (x++): " << x++ << endl; // Uses current value, then increments

 cout << "After Post-increment: " << x << endl;
 
 cout << "Pre-increment (++x): " << ++x << endl; //Increments, then uses the value

 return 0;

}