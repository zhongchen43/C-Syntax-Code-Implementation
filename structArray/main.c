#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _candidate
{
    char name[30];
    int voteCount;
} Candidate;

void disCandidateRes(Candidate *c, int n, int count)
{
    for (int i=0; i<n; i++)
    {
        printf("Name: %s,VoteCount: %d\n", c[i].name,c[i].voteCount);
    }
    printf("Number of people not voting: %d\n",count);

    int idx = 0;
    for (int i=0;i<n;i++)
    {
        if (c[i].voteCount > c[idx].voteCount)
            idx = i;
    }
    printf("Congratuations to %s for winning this competition\n", c[idx].name);
}

int main()
{
    Candidate can[3] =
    {
        {"zhangsan", 0},
        {"lisi",0},
        {"wangwu",0}

    };

    char buf[1024];
    int count = 0;
    for(int i=0; i<10; i++)
    {
        printf("Pls input you like:");
        int flag = 1;
        scanf("%s",buf);
        for (int i=0;i<3;i++)
        {
            if(!strcmp(buf,can[i].name))
            {
                can[i].voteCount++;
                flag = 0;
            }
        }
        if(flag != 0)
        {
            count++;
        }
    }

    disCandidateRes(can, 3, count);

    return 0;
}
