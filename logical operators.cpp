#include <iostream>
using namespace std;

int main() {
  
int a = 31, b = 4, c = 21;

// Logical AND
cout << "Logical AND (a > b && b < c): " << (a > b && b < c) << endl;

// Logical OR
cout << "Logical OR (a < b || b < c): " << (a < b || b < c) << endl;

// Logical NOT
cout << "Logical NOT (!(a > b)): " << !(a > b) << endl;

return 0;
}

