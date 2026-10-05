#include <stdio.h>

int main() {
    // Main budget variables
    double revenue;
    double expenses;
    double balance;

    // Extension variables
    int departments;
    double payroll;
    double procurement;
    double assets;

    // Title
    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("============================\n");

    // Get main budget information
    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    // Calculate balance
    balance = revenue - expenses;

    // Display main budget information
    printf("\n--- BUDGET SUMMARY ---\n");
    printf("Revenue:  %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance:  %.2f\n", balance);

    // Extension exercise
    printf("\n--- MUNICIPAL FINANCIAL SUMMARY ---\n");

    printf("Enter Number of Departments: ");
    scanf("%d", &departments);

    printf("Enter Payroll: ");
    scanf("%lf", &payroll);

    printf("Enter Procurement: ");
    scanf("%lf", &procurement);

    printf("Enter Assets: ");
    scanf("%lf", &assets);

    // Display extended summary
    printf("\n--- FINANCIAL SUMMARY ---\n");
    printf("Departments: %d\n", departments);
    printf("Payroll:     %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets:      %.2f\n", assets);

    return 0;
}

