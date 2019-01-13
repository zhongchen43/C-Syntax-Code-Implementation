#include <stdio.h>

int main()
{
    // if a is 2D array (int a[3][4];)
    // a      a[0]
    // a    -> *a    -> a[0]
    // a[0] -> &a[0] -> a

    int arr[3][4] = {{0,10,20,30},{40,50,60,70},{80,90,100,110}};

    printf("arr        = %p  arr+1     = %#x  arr+2    = %#x\n", arr, arr+1, arr+2);
    printf("arr[0]     = %p  arr[0]+1  = %#x  arr[0]+2 = %#x\n", arr[0], arr[0]+1, arr[0]+2);
    printf("*arr       = %p *arr+1     = %#x *arr+2    = %#x\n", *arr, *arr+1, *arr+2);
    printf("&arr[0]    = %p &arr[0]+1  = %#x &arr[0]+2 = %#x\n", &arr[0], &arr[0]+1, &arr[0]+2);


    // a[2][1] == *(*(arr+2) + 1)
    printf("%d\n", *(*(arr+2) + 1));
    printf("%d\n",arr[2][1]);

    return 0;
}
