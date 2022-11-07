#include <stdio.h>
#include <time.h>

int main() {
    int num = 0;
    int operation = 1;
    clock_t start_t, end_t;

    do {
        int result = 1;
        printf("Enter a positive integer: ");
        scanf(" %d", &num);

        start_t = clock();

        for (int i = 1; i <= num; i++) {
            result *= i;
        }

        end_t = clock();

        printf("%d! = %d\n", num, result);
        printf("Took %lf s to calculate\n", ((end_t - start_t) / CLOCKS_PER_SEC));

        printf("Press 1 to continue, 0 to stop:");
        scanf(" %d", &operation);

    } while (operation != 0);
}