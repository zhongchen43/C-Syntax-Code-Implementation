#include <stdio.h>

int main()
{// find the maximum and the minimum in an array

    int maxValue;
    int minValue;
    int arr[10] = {100, 6,8,2,0,1,3,5,7,9};
    maxValue = arr[0];
    minValue = arr[0];

    for (int i=1; i<10; i++) {
        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
        if(arr[i] < minValue){
            minValue = arr[i];
        }

    }

    printf("Max value = %d\n", maxValue);
    printf("Min value = %d\n", minValue);

    return 0;
}
