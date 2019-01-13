#include <stdio.h>


typedef struct _MyComplex
{
    float real;
    float image;
} MyComplex;

MyComplex addMyComplex(MyComplex *px, MyComplex *py)
{
    MyComplex t;
    t.real = px->real + py->real;
    t.image = px->image + py->image;

    return t;
}

int main()
{
    MyComplex c1 = {1,2};
    MyComplex c2 = {3,4};

    MyComplex retc = addMyComplex(&c1,&c2);


    printf("%2.f,%2.f\n", retc.real, retc.image);

    return 0;
}

