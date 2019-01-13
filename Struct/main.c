#include <stdio.h>

#if 0
// struct
//no name
struct
{
    char name[10];
    int num;
    char age;
    float score;
} s0;

// there is a name
struct stu
{
    char name[10];
    int num;
    char age;
    float score;
} s1;

#endif

// alias struct
typedef struct stu
{
    char name[10];
    int num;
    char age;
    float score;
} Stu;

int main()
{
    Stu s = {"zhangshan",1001,'f',99};
    Stu *ps = &s; // *ps == s, proved below

    printf("name  = %s\n",ps->name);
    printf("num   = %d\n",ps->num);
    printf("age   = %c\n",ps->age);
    printf("score = %f\n",ps->score);

    printf("name  = %s\n",(*ps).name);
    printf("num   = %d\n",(*ps).num);
    printf("age   = %c\n",(*ps).age);
    printf("score = %f\n",(*ps).score);

    return 0;
}
