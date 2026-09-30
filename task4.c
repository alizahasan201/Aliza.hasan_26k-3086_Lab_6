#include <stdio.h>
int main() {
    int marks, choi;
    int totstd = 0;

    do {
        printf("Enter marks of student: ");
        scanf("%d", & marks);
        printf("Marks entered: %d\n", marks);

        totstd++;

        printf("Do you want to enter marks for another student? (1/0): ");
        scanf("%d", &choi);

    } while (choi == 1);

    printf("\nTotal number of students: %d\n", totstd);

    return 0;
}
