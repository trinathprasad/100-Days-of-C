#include <stdio.h>

int main() {
    float hr, rate, isVacation, taxPer;
    float total = 0, overtimeHours = 0;  // Added a new variable

    printf("Enter rate, hours, vacation status (1/0), tax percentage: ");
    scanf("%f %f %f %f", &rate, &hr, &isVacation, &taxPer);

    if (hr > 40) {
        overtimeHours = hr - 40;  // Storing overtime hours separately

        if (isVacation == 1) {
            total = (overtimeHours * rate) * 2;
        } else {
            total = (overtimeHours * rate) * 1.5;
        }

        // Bonus if overtime hours exceed 70
        if (overtimeHours > 70) {
            total += total * 0.15;
        }

        // Tax deduction
        total -= (total * taxPer) / 100;

        printf("Overtime pay: %.2f\n", total);
    } else {
        printf("No overtime pay.\n");
    }

    return 0;
}
