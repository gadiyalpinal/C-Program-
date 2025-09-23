#include <stdio.h>

int main()
{
    float grossSalary, allowances, deductions, netSalary;

    printf("Enter Gross Salary: ");
    scanf("%f", &grossSalary);

    if (grossSalary > 10000) {
        allowances = grossSalary * 0.10; 
        deductions = grossSalary * 0.03; 
    } else if (grossSalary > 5000) {
        allowances = grossSalary * 0.07; 
        deductions = grossSalary * 0.02; 
    } else {
    }

    netSalary = grossSalary + allowances - deductions;

    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}