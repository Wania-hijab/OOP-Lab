#include <iostream>
#include <string>
using namespace std;

struct Employee {
 string name;
 int ID;
 int salary;
};

void InputEmployeeData(Employee employee[], int count) {
 for (int i = 0; i < count; i++) {
 cout << "Enter details for Employee " << i + 1 << ": "<<endl;
 cout << "Name: ";
 cin >> employee[i].name;
 cout << "Employee ID: ";
 cin >> employee[i].ID;
 cout << "Salary: ";
 cin >> employee[i].salary;
 }
}

void DisplayEmployeeData(Employee employee[], int count) {
 cout << "Employee Records "<<endl;
 for (int i = 0; i < count; i++) {
 cout << "Name: "<<employee[i].name<<endl;
 cout << "Employee ID: "<<employee[i].ID<<endl;
 cout << "Salary: "<<employee[i].salary<<endl;
 }
}

void FindHighestSalary(Employee employee[], int count) {
 int topIndex = 0;
 for (int i = 0; i < count; i++) {
 if (employee[i].salary > employee[topIndex].salary) {
 topIndex = i;
 }
 }
 cout << "Highest Salary"<<endl;
 cout << "Name: "<<employee[topIndex].name<<endl;
 cout << "Employee ID: "<<employee[topIndex].ID<<endl;
 cout << "Salary: "<<employee[topIndex].salary<<endl;
}

int main() {
 int numEmployees;
 cout << "Enter the number of employees: ";
 cin >> numEmployees;
 
 Employee employee[numEmployees];
 InputEmployeeData(employee, numEmployees);
 DisplayEmployeeData(employee, numEmployees);
 FindHighestSalary(employee, numEmployees);
 
 return 0;
}

