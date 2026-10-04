#include <stdio.h>
int main()
{
    int marks[5];
    int tot = 0;
    int high, low;
    float avg;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

    high = marks[0];
    low = marks[0];

    for(int i = 0; i < 5; i++)
    {
        tot = tot + marks[i];

        if(marks[i] > high)
        {
            high = marks[i];
        }

        if(marks[i] < low)
        {
            low = marks[i];
        }
    }

    avg = tot / 5;

    printf("Total Marks: %d\n", tot);
    printf("Average Marks: %.2f\n", avg);
    printf("Highest Marks: %d\n", high);
    printf("Lowest Marks: %d\n", low);

    return 0;
}
