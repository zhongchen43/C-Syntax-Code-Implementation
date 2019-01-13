#include <stdio.h>
#include <stdlib.h>

int main()
{
#if 0
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("%d %d\n", arr[1], 1[arr]);
    printf("%d %d\n", *(arr+1), *(1+arr));
# endif

    int arr[3][4];

    printf("arr = %p\n", arr);
    printf("arr[0] =  %p\n", &arr[0]);
    printf("arr =  %p arr + 1 = %p\n", arr, arr+1);

    printf("arr[0] = %p\n", arr[0]);
    printf("arr[0][0] =  %p\n", &arr[0][0]);
    printf("arr[0] =  %p arr[0] + 1 = %p\n", arr[0], arr[0]+1);
    printf("&arr[0]+1 =  %p &arr[0][0] + 1 = %p\n", &arr[0]+1, &arr[0][0]+1);

    printf("sizeof(arr[0]) =  %d sizeof(int[4]) = %d\n", sizeof(arr[0]), sizeof(int[4]));
    printf("sizeof(arr) =  %d\n", sizeof(arr));


#if 0
    // chess:
    // play a chess and find if there is a good chess!
    int chess[10][10] = {0};
    srand(time(NULL));

    int x, y;
    int count = 0;
    //    while(1){
    //        x = rand()%10;
    //        y = rand()%10;
    //        if (chess[x][y] != 1){
    //            chess[x][y] = 1;
    //            count++;
    //            if (count == 10)
    //                break;
    //        }
    //    }

    while(count<10){
        x = rand() % 10;
        y = rand() % 10;

        if (chess[x][y] == 1)
            continue;
        chess[x][y] = 1;
        count++;

    }

    for (int i=0; i< 10; i++){
        for (int j=0; j<10; j++) {
            printf("%2d",chess[i][j]);

        }
        putchar(10);
    }


    count = 0;
    int flagGoodChess = 0;
    for (int i=0; i<10; i++)
    {
        // row scan
        for (int j = 0; j<10; j++) {
            if (chess[i][j] == 1){
                count++;
                if (count == 3){
                    flagGoodChess = 1;
                    break;
                }
            }
            else{
                count = 0;
            }


        }
        if (flagGoodChess == 1)
            break;

        // column scan
        for (int j = 0; j<10; j++) {
            if (chess[j][i] == 1){
                count++;
                if (count == 3){
                    flagGoodChess = 1;
                    break;
                }
            }
            else{
                count = 0;
            }


        }
        if (flagGoodChess == 1)
            break;
    }
    if (flagGoodChess == 1)
        printf("Good chess!\n");
    else {
        printf("Not good chess!\n");
    }

#endif

    return 0;
}
