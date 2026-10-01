#include <stdio.h>
int main() {
                float avg;
                int marks;
                int tot =0, nos=0;

    do 
        {
            printf("Enter the Marks: ");
            scanf("%d", & marks);
            nos++;
            tot = tot + marks;
            
        } while (marks>-1);
    
       avg = tot/nos;
            
    printf("The Total Marks are: %d\n", tot);
    printf("The Number of Students: %d\n", nos);
    printf("The Average Marks are: %.2f\n", avg);
    
    return 0; 
}
