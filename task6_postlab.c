#include <stdio.h>
int main()
{
    int pin, att = 0, rem;

    while(att < 3)
    {
        printf("Enter PIN: ");
        scanf("%d", & pin);

        if(pin == 1234)
        {
            printf("Login Successful\n");
            break;
        }
        else
        {
            att++;
            rem = 3 - att;

            printf("Incorrect PIN \n");
            printf("Remaining Attempts: %d\n", rem);
        }
    }

    if(att == 3)
    {
        printf("Account Locked\n");
    }

    return 0;
}
