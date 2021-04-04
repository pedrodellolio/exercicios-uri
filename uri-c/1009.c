#include <stdio.h>

int main(void) {
    char name;
    double totalSales, salary, finalSalary;
    scanf("%s", & name);
    scanf("%lf", & salary);
    scanf("%lf", & totalSales);
    finalSalary = salary + 0.15 * totalSales;
    printf("TOTAL = R$ %.2lf\n", finalSalary);
    return 0;
}