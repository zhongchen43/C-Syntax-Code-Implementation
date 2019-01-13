#include <stdio.h>

int main()
{
#if 0
    // pointer type
    int data = 0x12345678;
    printf("%p\n", &data);

    printf("%x\n", *(&data));
    printf("%x\n", *((int*)0x7ffee4452a98));

    printf("%x\n", *((char*)0x7ffee4452a98));
    printf("%x\n", *((short*)0x7ffee4452a98));
    printf("%x\n", *((int*)0x7ffee4452a98));

    return 0;


    // NULL is used for pointer which is not used right now.
    // NULL cannot be read and written
    int * pa = NULL; // NULL (void *)0

    * pa = 100;
    if(* pa != NULL)
        printf("%d", *pa);
#endif

    int *p = (int*)0x0001;
    int data = 0x0001;
    printf("p    = %#x p+1    = %#x\n", p, p+1);
    printf("data = %#x data+1 = %#x\n", data, data+1);

    printf("(double*)p = %#x (double*)p+1 = %#x\n", (double*)p, (double*)p+1);
    printf("(int)p     = %#x (int)p+1     = %#x\n", (int)p, (int)p+1);

    printf("%x\n",++p);
    printf("%x\n",++data);

    //
    int arr[10];

    int pHead = (int)&arr[0];
    int pTail = (int)&arr[9];
    printf("%d\n", pTail - pHead);

    return 0;


}
