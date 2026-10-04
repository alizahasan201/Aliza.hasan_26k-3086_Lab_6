#include <stdio.h>
int main()
{
    float units[5], bill, totuni = 0, totamo = 0;
    float high, low;
    int i;

    printf("Enter electricity units for 5 households:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &units[i]);

        totuni = totuni + units[i];

        bill = units[i] * 10;

        if(units[i] > 500)
        {
            bill = bill + (bill * 0.05);
        }

        totamo = totamo + bill;

        if(i == 0)
        {
            high = units[i];
            low = units[i];
        }
        else
        {
            if(units[i] > high)
            {
                high = units[i];
            }

            if(units[i] < low)
            {
                low = units[i];
            }
        }
    }

    printf("\nTotal Units Consumed = %.2f", totuni);
    printf("\nHighest Units = %.2f", high);
    printf("\nLowest Units = %.2f", low);
    printf("\nTotal Amount Collected = %.2f", totamo);

    return 0;
}
