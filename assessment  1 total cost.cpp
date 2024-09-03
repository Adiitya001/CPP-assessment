//This program calculates the total cost of supplies 
#include <iostream>
using namespace std;

int main() {
  //assigning supply names and cost
    int notebooks = 15;
    int pens = 20;
    float costPerNotebook = 2.25;
    float costPerPen = 0.75;
  
  //for calculating totalcost of supplies
    float totalCost = (notebooks * costPerNotebook) + (pens * costPerPen);

  //To print the total cost 
    cout << "Total cost of the supplies: Rs. " << totalCost << endl;

    return 0;
}