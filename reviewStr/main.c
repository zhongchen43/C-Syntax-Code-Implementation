#include <stdio.h>
#include <stdlib.h>

int main()
{
#if 0
    char arr[] = "china";

    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof("china"));
#endif
    char *p = "china";

    printf("%x\n",sizeof(p));

    return 0;
}
