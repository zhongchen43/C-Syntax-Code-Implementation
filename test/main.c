#include <stdio.h>

// Print the binary number of data
void disBinary(char ch)
{
    int i = 8;
    while(i--)
    {
        if ((1 << i) & ch)
            printf("1");
        else
            printf("0");

        if (i % 4 == 0)
        {
            printf(" ");
        }
    }
    putchar(10);
}

void varExchange(int a, int b)
{
    printf("Original value for inputs, a = %d, b = %d", a, b);
    // variable change
    a = a^b;
    b = a^b;
    a = a^b;

    printf("Value after exchange, a = %d b = %d\n", a, b);
}

int main()
{
    for (char i = -128; i < 127; i++) {
        printf("%d --> ", i);
        disBinary(i);
    }

    printf("%d --> ", 127);
    disBinary(127);

    return 0;
}
