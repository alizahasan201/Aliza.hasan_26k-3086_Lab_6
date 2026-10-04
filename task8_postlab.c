#include <stdio.h>
int main()
{
    float pri[5], tot = 0, disc, famo;
    int i;

    printf("Enter prices of 5 products: \n");
    for(i = 0; i < 5; i++)
    {
        
        scanf("%f", &pri[i]);
        tot = tot + pri[i];
    }

    if(tot > 10000)
    {
        disc = tot * 0.10;
    }
    else
    {
        disc = 0;
    }

    famo = tot - disc;

    printf("\nOriginal Total = %.2f", tot);
    printf("\nDiscount = %.2f", disc);
    printf("\nFinal Amount = %.2f", famo);

    return 0;
}
