#include <stdio.h>
int main()
{
    int add;
    float pri, tot = 0, disc = 0, fbill;

    do
    {
        printf("Enter the Price of Item: ");
        scanf("%f", &pri);

        tot = tot + pri;

        printf("Do you want to add another item? (1/0): ");
        scanf("%d", &add);

    } while(add == 1);

    if(tot > 10000)
    {
        disc = tot * 0.10;
    }

    fbill = tot - disc;

    printf("Total Price: %.2f\n", tot);
    printf("Discount: %.2f\n", disc);
    printf("Final Amount: %.2f\n", fbill);

    return 0;
}
