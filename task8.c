#include <stdio.h>

int main() {

    int sal[6];
    int count = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%d", &sal[i]);
    }

    for (i = 0; i < 6; i++)
    {
        printf("\nEmployee %d salary: %d", i + 1, sal[i]);

        if (sal[i] > 50000)
        {
            count++;
        }
    }

    printf("\nEmployees with salary greater than 50000: %d", count);

    return 0;
}
