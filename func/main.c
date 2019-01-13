#include <stdio.h>

void mySwap(int *pa, int *pb);
int main()
{
    int a = 3, b = 5;
//    printf("&a = %#x &b = %#x\n", &a, &b);
    printf("a = %d, b = %d\n", a, b);

    mySwap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

//    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//    printf("sizeof    (arr) = %d\n", sizeof(arr));
//    printf("sizeof (arr[0]) = %d\n", sizeof(arr[0]));

    return 0;
}
void mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
