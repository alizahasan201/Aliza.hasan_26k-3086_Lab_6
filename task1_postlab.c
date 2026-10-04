#include <stdio.h>
int main() {
                float wamo, rembal;
                int inibal = 50000;
                int tot =0, nowi=0;

    do 
        {
            printf("Enter the Withdrawl Amount: ");
            scanf("%f", & wamo);
            nowi++;
             tot = tot + wamo;
            
        } while (wamo>0);
    
    rembal = inibal - tot;
            
    printf("The Remaining Balance is: %.2f\n", rembal);
    printf("The number of Withdrawl Transactions: %d", nowi);
    
    return 0;
}
