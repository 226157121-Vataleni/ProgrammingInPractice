// Online C compiler to run C program online
#include <stdio.h>
int main(){
//Declaring Variables
double salary =0.00;
double housingAllowance=0.00;
double transportAllowance=0.00;
double tax =0.00;
double grossSalary=0.00;
double netwage = 0.00;
 // 1. Ask user for salary
 printf("Enter salary");
 scanf("%lf",&salary);
 //2.Ask user housing allowance
 printf("Enter housing allowance");
 scanf("%lf",&housingAllowance);
 //3.Ask user for transport allowance
 printf("Enter transport allowance");
 scanf("%lf",&transportAllowance);
 //4. Ask user for tax
 printf("Enter tax");
 scanf("%lf",&tax);
 //5. Calculate and output  Gross salary
 grossSalary=salary+housingAllowance+transportAllowance;
 printf("Gross salary: %.2f\n",grossSalary);
 //6. Calculate and Display Net salary
 netwage=grossSalary-tax;
 printf("Net salary: %.2f\n", netwage);
}
 