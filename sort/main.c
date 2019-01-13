#include <stdio.h>
# define n 10

int main()
{
    sort_ascend_choice();
    sort_ascend_choice_opt();

    return 0;
}

int sort_ascend_choice(){
    // sort ascend with choice method
    int arr[n] = {0,3,5,6,4,2,9,7,8,1};
    int tmp;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] > arr[j]){
                // find the smaller value to exchange
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}

int sort_ascend_choice_opt(){
    // sort ascend with choice optimized method
    int arr[n] = {0,3,5,6,4,2,9,7,8,1};

    for (int i = 0; i < n; i++){
        int idx = i;
        for (int j = i+1; j < n; j++){
            if (arr[idx] > arr[j]){
                // compare and record the index but not exchange each time
                idx = j;
            }
            if (idx != i){
                // exchange the value wehn find the index of the minimum value
                arr[idx] ^= arr[i];
                arr[i] ^= arr[idx];
                arr[idx] ^= arr[i];
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
