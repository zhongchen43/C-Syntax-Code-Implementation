#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    char * p = (char*)malloc(1024*1024*3);
//    strcpy(p,"abcd");
//    printf("over\n");

//    free(p);

//    int arr[10];

//    int * pa = (int *)malloc(10*sizeof(int));
//    memset(pa, 0, 10*sizeof(int));

    // process: apply, judge, use, free, NULL
    char *p = (char *)malloc(100);
    if(NULL == p)
        exit(-1);
    strcpy(p,"china");
    free(p);
    p = NULL;
    if (NULL != p)
        strcpy(p,"abcd");


    return 0;
}
