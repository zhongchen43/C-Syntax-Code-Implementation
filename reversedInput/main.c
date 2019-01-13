#include <stdio.h>

int main()
{
    int value, r_digit;
    value = 0;

    do
    {
        printf("\nPlease input a digit number: ");
        scanf("%d", &value);
        if(value <= 0 )
            printf("This number should be positive number!\n");
    }while(value <= 0);
    printf("\nReversed number is:");
    do
    {
        r_digit = value % 10;
        printf("%d",r_digit);
        value = value / 10;
    }while(value != 0 );
    printf("\n");
    return 0;
}
