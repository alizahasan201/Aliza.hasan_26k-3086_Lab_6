#include <stdio.h>
int main() {
    float temp;
    int tot = 0;
    int count = 0;

    for (int day = 1; day <= 7; day++) 
    {
        printf("Enter temperature for day %d: ", day);
        scanf("%f", &temp);

        tot = tot + temp;

        if (temp > 100) {
            count++;
        }
    }

    printf("\nTotal temperature = %d\n", tot);
    printf("Temperatures greater than 100 = %d\n", count);

    return 0; }
