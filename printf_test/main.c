#include <stdio.h>

int main()
{
    // test the return value for printf function
    //    int i = 43;
    //    printf("%d\n", printf("%d", printf("%d", i)));


    // Print the diamond
    int n = 10; // the size of the diamond
    // print the up part
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n-i; j++)
            printf(" ");
        for(int k = 0; k <= i ; k++)
            printf("* ");

//        printf("\n");
        putchar(10);
    }
    // print the down part
    for (int i = 0; i <= n-1; i++)
    {
        for(int j = 0; j <= i+1; j++)
            printf(" ");
        for(int k = 0; k <= n-1-i; k++)
            printf("* ");

//        printf("\n");
        putchar(10);
    }

    return 0;
}
