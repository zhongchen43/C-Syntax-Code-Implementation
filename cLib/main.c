#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    srand(time(NULL));  //offer a seed to random number generator

//    int randNum = rand(); // get random number
//    printf("%d\n", randNum);

    int randArr[10];
    int count = 0;
    while (1) {
        int num = rand() % 10;
        randArr[count++] = num;

        for (int i=0; i<count-1; i++) {
            if(randArr[i] == randArr[count-1])
            {
                count--;
                break;
            }
        }
        if(count == 10)
            break;

    }
    for (int i=0; i<10;i++) {
        printf("%d \n",randArr[i]);

    }

    return 0;
}
