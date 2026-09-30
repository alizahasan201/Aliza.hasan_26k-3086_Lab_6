#include <stdio.h>

int main() {

    float amo;
    int dep = 0;
    float tot = 0;

    printf("Enter the saved amount: ");
    scanf("%f", &amo);

    while (amo > 0) {

        tot = tot + amo;
        dep++;

        printf("Enter the saved amount: ");
        scanf("%f", &amo);
    }

    printf("Total savings: %.2f", tot);
    printf("\nTotal deposits made: %d", dep);

    return 0;
}
