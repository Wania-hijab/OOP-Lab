#include <iostream>
using namespace std;

double calculateGrossSalary(double basic, double allowancePercentage) {
    double allowance = (allowancePercentage / 100) * basic;
    return basic + allowance;
}

double calculateNetSalary(double gross, double deductionPercentage) {
    double deduction = (deductionPercentage / 100) * gross;
    return gross - deduction;
}

int main() {
    double basicSalary, allowancePercentage, deductionPercentage;

    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter allowance percentage : ";
    cin >> allowancePercentage;
    cout << "Enter deduction percentage : ";
    cin >> deductionPercentage;

    double grossSalary = calculateGrossSalary(basicSalary, allowancePercentage);
    double netSalary = calculateNetSalary(grossSalary, deductionPercentage);

    cout << "The final net salary is: " << netSalary << endl;

    return 0;
}
