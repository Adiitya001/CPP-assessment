#include <iostream>
using namespace std;


int main() {
  
  int globalVar = 15;
  // Global variable
  
 int localVar = 23; // Local variable
 
 static int staticVar = 6; // Static variable
 
 cout << "Global Variable: " << globalVar << endl;
 cout << "Local Variable: " << localVar << endl;
 
 staticVar++;
 cout << "Static Variable: " << staticVar << endl;
 
 return 0;
}
