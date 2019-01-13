#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int initRandArr(int *arr, int n)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
        *arr++ = rand()%100;
}

void disArr(int *arr, int n)
{
    for (int i=0; i<n; i++)
        printf("%2d\n", *arr++);
}

void mySwap(int *pa, int *pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;

}

int smallestIdx(int startIdx, int *arr, int n)
{
    int idx = startIdx;
    for (int i = startIdx+1; i<n; i++)
    {
        if (arr[i] < arr[idx])
            idx = i;
    }
    return idx;
}

void sortSelect(int *arr, int n)
{
    int idx;
    for (int i=0; i<n; i++)
    {
        idx = smallestIdx(i, arr, n);
        if (idx != i)
            mySwap(&arr[i], &arr[idx]);
    }

}

int main()
{
    int n = 10;
    int arr[n];
    initRandArr(arr, n);
    printf("\n Original array:\n");
    disArr(arr, n);
    sortSelect(arr,n);

    printf("\nArray after sort ascendly:\n");
    disArr(arr,n);

    return 0;
}
