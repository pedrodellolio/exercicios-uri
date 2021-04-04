#include <stdio.h>

int main(void) {
    int ENumber, EHours;
    float EAmount, SALARY;
    scanf("%d", & ENumber);
    scanf("%d", & EHours);
    scanf("%f", & EAmount);
    SALARY = EHours * EAmount;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", ENumber, SALARY);
    return 0;
}