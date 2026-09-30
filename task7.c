#include <stdio.h>
int main() {

    char food[50];
    float pri;
    float tot = 0;
    int choi;
    int items = 0;

    do {
        printf("Enter food item: ");
        scanf("%s", & food);
        printf("Enter price: ");
        scanf("%f", & pri);

        tot = tot + pri;
        items++;

        printf("Do you want to order another item? (1/0): ");
        scanf("%d", & choi);

    } while (choi == 1);

    printf("\n Total Bill: %.2f", tot);
    printf("\n Number of items ordered: %d", items);

    return 0; 
}
