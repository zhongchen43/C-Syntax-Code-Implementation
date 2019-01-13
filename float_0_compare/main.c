#include <stdio.h>

int main()
{ // float number is not correct, so we need the fixed number. (In example 2)

    float data = 0.0;
    if(data == 0)
    {
        printf("equal\n");
    }
    else {
        printf("not equal\n");
    }

   // example 2
    double tmp = 0.3;

    printf("%d\n", (int)tmp * 10); // output is correct

    printf("%d\n", (int)(tmp * 10)); // output is wrong sometimes

    printf("%d\n", (int)((tmp + 0.000001) * 10)); // output is correct


    if(tmp > 0 - 0.00001 && tmp < 0 + 0.00001)
    {
        printf("tmp == 0\n");
    }
    else {
        printf("tmp != 0\n");

    }

    return 0;
}
