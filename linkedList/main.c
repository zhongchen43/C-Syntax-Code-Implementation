#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node * next;
}Node;

// dynamic linked list
#if 0
Node * createList()
{ // Insert from tail
    Node * head = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    head->next = NULL;

    Node *t = head, *cur;
    int nodeData;
    scanf("%d", &nodeData);
    while(nodeData)
    {
        cur = (Node *)malloc(sizeof(Node));
        if(NULL == cur)
            exit(-1);
        cur->data = nodeData;
        t->next = cur;
        t = cur;
        scanf("%d",&nodeData);
    }
    t->next = NULL;
    return head;
}
#endif

Node * createListHead()
{
    // insert from head
    // efficiency is higher than tail-insert
    Node * head = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    head->next = NULL;
    Node * cur;

    int nodeData;
    scanf("%d", &nodeData);
    while(nodeData)
    {
        cur = (Node *)malloc(sizeof(Node));
        if(NULL == cur)
            exit(-1);
        cur->data = nodeData;

        cur->next = head->next;
        head->next = cur;

        scanf("%d",&nodeData);
    }
    return head;
}

// traverseList
void traverseList(Node * head)
{
    head = head -> next;
    while(head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

// compute the length
int lenList(Node * head)
{
    int len = 0;
    head = head->next;
    while(head)
    {
        len++;
        head = head->next;
    }
    return len;
}

// insert
void insertList(Node * head, int insertData)
{// insert from head
    Node * cur = (Node *)malloc(sizeof(Node));
    cur->data = insertData;
    cur->next = head->next;
    head->next = cur;
}

// search list
Node * searchList(Node * head, int find)
{
    head = head->next;
    while(head)
    {
        if(head->data == find)
            break;
        head = head->next;
    }
    return head;
}

// delete node of list
void deleteNodeOfList(Node *head, Node *pfind)
{
    if(pfind->next == NULL)
    {
        while(head->next != pfind)
            head = head->next;
        head->next = pfind->next;
        free(pfind);
        pfind = NULL;
    }
    else
    {
        Node *t = pfind->next;
        pfind->data = pfind->next->data;
        pfind->next = pfind->next->next;
        free(t);
    }
}

// sort
#if 0
// sort based on data change
void popSortList(Node * head)
{
    int len = lenList(head);
    head = head->next;
    Node *p, *q;
    for(int i=0; i<len-1; i++)
    {
        p = head; // start from head each time
        q = p->next;
        for(int j=0; j>len-1-i; j++)
        {
            if(p->data > q->data)
            {
                p->data ^= q->data;
                q->data ^= p->data;
                p->data ^= q->data;
            }
            p = p->next;
            q = p->next;
        }
    }
}
#endif

// sort based on pointer change
void popSortLoistPointer(Node * head)
{
    int len = lenList(head);
    Node *prep, *p, *q, *t;
    for(int i=0; i<len-1; i++)
    {
        prep = head;
        p = head->next;
        q = p->next;
        for (int j=0; j<len-1-i; j++)
        {
            if(p->data > q->data)
            {
                prep->next = q;
                p->next = q->next;
                q->next = p;

                t = p;
                p = q;
                q = t;
            }
            prep = prep->next;
            p = p->next;
            q = p->next;
        }
    }
}

#if 0
// 冒泡排序
for(int i=0; i<N-1; i++)
{
    for(int j=0; j<N-1-i; j++)
    {
        if(arr[i]>arr[j])
        {}
    }
}
#endif

// reversed list
void reversedList(Node * head)
{
    Node * p = head->next, *q; // cut the original list as two lists
    head->next = NULL;
    while(p != NULL)
    {
        q = p->next;
        p->next = head->next;
        head->next = p;
        p = q;
    }
}

// destory list
void destoryList(Node * head)
{
    Node * p = NULL;
    while(head)
    {
        p = head->next;
        free(head);
        head = p;
    }
}


int main()
{
#if 0
    //static linked list
    Node a;
    Node b;
    Node c;
    a.data = 10;
    b.data = 20;
    c.data = 30;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    Node * head = &a;
    while(head != NULL)
    {
        printf("data = %d\n", head->data);
        head = head->next;
    }
#endif

    Node * head = createListHead();
    srand(time(NULL));
    for(int i = 0; i<10; i++)
    {
        insertList(head, rand()%100);
    }

    traverseList(head);

    printf("len of list = %d\n", lenList(head));

    Node *pfind = searchList(head, 5);
    if(pfind == NULL)
        printf("find none\n");
    else {
        pfind->data = 1000;
        traverseList(head);

        printf("Your find in list\n");
        deleteNodeOfList(head, pfind);
    }
    traverseList(head);
    popSortLoistPointer(head);

    printf("after popsort\n");
    traverseList(head);

    reversedList(head);
    printf("after reverse\n");
    traverseList(head);

    destoryList(head);

    return 0;
}
