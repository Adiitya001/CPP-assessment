#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(string empName, int empId, double empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
    }

    void displayDetails() {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1("Alice Johnson", 1001, 55000.50);
    Employee emp2("Bob Smith", 1002, 62000.75);

    emp1.displayDetails();
    cout << endl; 
    emp2.displayDetails();

    return 0;
}
