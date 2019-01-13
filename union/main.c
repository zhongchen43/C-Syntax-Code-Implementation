#include <stdio.h>
#include <stdlib.h>

typedef struct _structTest
{
    char a;
    short b;
    int c;
}MyStruct;

typedef struct _unionTest
{
    char a;
    short b;
    int c;
}MyUnion;

int main()
{
    MyStruct ms;
    MyUnion mu;
    mu.c = 0x12345678;
    // size
    printf("sizeof(MyStruct) = %d\n", sizeof(MyStruct));
    printf("sizeof(MyUnion) = %d\n", sizeof(MyUnion));

    // position
    printf("%p %p %p\n", &ms.a,&ms.b,&ms.c);
    printf("%p %p %p\n", &mu.a,&mu.b,&mu.c);


    printf("%x %x %x\n", mu.a,mu.b,mu.c);
    return 0;
}
