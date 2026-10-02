#include <stdio.h>
int main()
{
    int ream;
    int tot = 0, nor = 0;

    do
    {
        printf("Enter the Recharge Amount: ");
        scanf("%d", &ream);

        if(ream > 0)
        {
            nor++;
            tot = tot + ream;
        }

        if(tot > 5000)
        {
            printf("RECHARGE LIMIT REACHED\n");
            break;
        }

    } while(ream > 0);

    printf("The Total Recharge: %d\n", tot);
    printf("The Number of Recharge Attempts: %d\n", nor);

    return 0;
}
