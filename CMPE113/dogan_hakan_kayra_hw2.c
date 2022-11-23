#include <stdio.h>

int main() {
    int baseSalary = 2000, productPrice = 125, salespeopleCount = 5, i = 0;

    while (i < salespeopleCount) {
        int saleCount = 0;
        float totalSalary = 0.0, comissionRate = 0.0;

        printf("Enter the sales number of product A: ");
        scanf("%d", &saleCount);

        if (saleCount < 10) {
            comissionRate = 0.0;
            // printf("%d\t%d\t%f", saleCount, productPrice, comissionRate);        //? used for debugging
        } else if (saleCount >= 10 && saleCount < 100) {
            comissionRate = 10.0 / 100.0;
            // printf("%d\t%d\t%f", saleCount, productPrice, comissionRate);        //? used for debugging
        } else {
            comissionRate = 15.0 / 100.0;
            // printf("%d\t%d\t%f", saleCount, productPrice, comissionRate);        //? used for debugging
        }

        //? Calculate total salary based on {baseSalary} and {comissionRate}
        totalSalary = baseSalary + (saleCount * productPrice * comissionRate);
        printf("Salary: $%.2f\n", totalSalary);
        i++;
    }

    return 0;
}