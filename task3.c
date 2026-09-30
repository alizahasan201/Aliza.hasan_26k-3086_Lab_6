#include <stdio.h>
int main() {
             int i=1;
             int cube = 0;
   while (i != 0)
        {
           printf("Enter user number: ");
           scanf("%d", & i);
           cube = i*i*i;
           printf("The cubes are: %d\n", cube);
        }
    return 0;
}
