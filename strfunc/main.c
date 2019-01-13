#include <stdio.h>
#include <string.h>

int myStrlen(char * str)
{
    int len;
    for (len = 0; *str++; len++) ;
    return len;
}

char * myStrcat(char *dest, char *src)
{
    char * d = dest;
    while(*dest) dest++;
    while(*dest++ = *src++) ;
    return d;

}
char * myStrcpy(char *dest, char *src)
{
    char *d = dest;
    while(*dest++ = *src++);
    return d;
}

int myStrcmp(char *s1, char *s2)
{
#if 0
    // original code
    //
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1>*s2)
            return 1;
        else if(*s1<*s2)
            return -1;
        else
        {
            s1++;
            s2++;
        }
    }

    // code below can be changeg to return *s1-*s2
    if(*s1 == '\0' && *s2!='\0')
        return -1;
    else if (*s1 != '\0' && *s2 == '\0')
        return 1;
    else
        return 0;
#endif
    //opitimize
    for(; *s1 && *s2; s1++,s2++)
        if(*s1 != *s2)
            break;
    return *s1 - *s2;
}
int main()
{
    // test myStrlen, myStrcat, myStrcpy
//    char name[30] = "zhong";
//    char name2[30] = "chen";

//    int len = myStrlen(name);
//    printf("%d\n",len);

//    myStrcat(name,name2);
//    myStrcpy(name,name2);
//    printf("%s\n", name);

    // test myStrcmp
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
