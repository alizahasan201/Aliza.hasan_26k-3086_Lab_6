#include <stdio.h>
int main()
{
    int ord;
    float pri, tot = 0, disc = 0, fbill;

    do
    {
        printf("Enter the Price of Item: ");
        scanf("%f", &pri);

        tot = tot + pri;

        printf("Do you want to order another item? (1/0): ");
        scanf("%d", &ord);

    } while(ord == 1);

    if(tot > 5000)
    {
        disc = tot * 0.05;
    }

    fbill = tot - disc;

    printf(" Your Total Bill: %.2f\n", tot);
    printf("Discount: %.2f\n", disc);
    printf("Your Final Bill: %.2f\n", fbill);

    return 0;
}
