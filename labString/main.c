#include <stdio.h>
#include "mystring.h"

int main()
{
    char *s1 = "a2345";
    char *s2 = "12345";
    int ret = myStrcmp(s1, s2);
    if (ret ==0)
        printf("s1==s2\n");
    else if(ret>0)
        printf("s1>s2\n");
    else
        printf("s1<s2\n");
    return 0;
}
