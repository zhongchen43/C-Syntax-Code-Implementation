#include <stdio.h>
# define n 10

int main()
{// find algorithm

    linearFind();
    halfFoldSearch();

    return 0;
}

int linearFind(){
    // linear-find
    int arr[n] = {0,3,5,6,4,2,9,7,8,1};

    int findData = 5;
    int idx = -1;

    for (int i = 0; i < n; ++i) {
        if(arr[i] == findData){
            idx = i;
        }
    }

    if(idx == -1){
        printf("Do not find the value1\n");
    }
    else {
        printf("idx = %d\n", idx);
    }

    return 0;
}


int halfFoldSearch(){

    int arr[n] = {0,1,2,3,4,5,6,7,8,9};
    int findData = 5;
    int low = 0;
    int high = n-1;
    int midIndex = -1;
    int idx = -1;

    while(low <= high){
        midIndex = (low+high)/2;
        if(findData == arr[midIndex]){
            idx = midIndex;
            break;
        }
        else if(findData > arr[midIndex]){
            low = midIndex + 1;
        }else{
            high = midIndex - 1;
        }
    }

    if(idx != -1){
        printf("idx =  %d\n", idx);
    }
    else{
        printf("find none\n");
    }

    return 0;
}
