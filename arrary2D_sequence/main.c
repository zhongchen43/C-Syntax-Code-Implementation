#include <stdio.h>
#define M 5
#define N 3

int main()
{
    int A[M] = {1,3,5,7,9};
    int B[N] = {2,4,6};
    int C[M+N];

    int i = 0, j = 0, k = 0;
    while(i<M && j<N)
    {
        if(A[i] < B[j]){
            C[k++] = A[i++];
        }else {
            C[k++] = B[j++];
        }
    }

    while(i < M)
        C[k++] = A[i++];
    while(j < N)
        C[k++] = B[j++];

    for (i = 0; i < M+N; i++)
        printf("%d\n", C[i]);

    return 0;
}
