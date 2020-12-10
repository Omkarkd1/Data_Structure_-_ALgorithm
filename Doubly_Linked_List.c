#include<stdio.h>
#include<stdlib.h>
int n,pos=0;
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}Node;
struct node* temp;
struct node* createlist(struct node *head)
{
    int i,n;
    printf("Create list.....\n");
    printf("Enter number of nodes\t");
    scanf("%d",&n);
    struct node *nextnode;
    temp=head;
    for(i=0;i<n;i++)
    {
        nextnode=(struct node*)malloc(sizeof(struct node));
        nextnode->next=NULL;
        nextnode->prev=NULL;
        printf("\nEnter %dth node data:-\t",i+1);
        scanf("%d",&nextnode->data);
        nextnode->next=NULL;
        temp->next=nextnode;
        nextnode->prev=temp;
        temp=nextnode;
    }
}
void printlist(struct node* head)
{
    printf("List :- ");
    while(head!=NULL)
    {
        printf("%d-->",head->data);
        head=head->next;
    }
    printf("\n");
}
void insert(struct node* head)
{
    int a,q,counter=1;
    struct node *temp1,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nChoose.......\n\n1.Insert at beginning\n2.Insert at end\n3.Insert at between two nodes\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        temp1=head->next;
        printf("\n\nEnter element wanted to insert\n");
        scanf("%d",&newnode->data);
        newnode->next=temp1;
        newnode->prev=head;
        temp1->prev=newnode;
        head->next=newnode;
        break;

        case 2:
        while(head!=NULL)
        {
            temp1=head;
            head=head->next;
        }
        printf("\n\nEnter element wanted to insert\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp1->next=newnode;
        break;

        case 3:
        printf("Enter possition pos of node you want to insert\n");
        scanf("%d",&q);
        while(counter!=q)
        {
            head=head->next;
            counter++;
        }
        printf("\n\nEnter element wanted to insert\n");
        scanf("%d",&newnode->data);
        newnode->next=head->next;
        head->next=newnode;
        break;

        default:
        printf("Wrong Entry.....");
    }
}
void delete(struct node* head)
{
 int a,q,counter=0;
    struct node *temp1,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nChoose.......\n\n1.Delete element at beginning\n2.Delete element at end\n3.Delete element  between two nodes\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        temp1=head->next;
        head->next=temp1->next;
        free(temp1);
        break;

        case 2:
        while(head->next!=NULL)
        {
            temp1=head;
            head=head->next;
        }
        temp1->next=NULL;
        free(head);
        break;

        case 3:
        printf("Enter possition pos of node you want to Delete\n");
        scanf("%d",&q);
        while(counter!=q)
        {
            temp1=head;
            head=head->next;
            counter++;
        }
        temp1->next=head->next;
        free(head);
        break;

        default:
        printf("Wrong Entry.....");
    }   
}
void printReverselist(struct node* temp)
{
    printf("List :");
    while(temp!=NULL)
    {
        printf("<--%d",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
int search(struct node* head)
{
    int key;
    pos=0;
    printf("\nEnter element wanted to search\n");
    scanf("%d",&key);
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return pos;
        }
        pos++;
        head=head->next;
    }
    return -1;
}
void main()
{
    int p,menu=0;
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    head->prev=NULL;
    
    while(menu !=7)
    {
        printf("\nMenu\n\n1.create list\n2.Display\n3.Insert\n4.Delete\n5.Search\n6.Reverse\n7.Exit\n\n Select :-\t");
        scanf("%d",&menu);

        switch(menu)
            {
             case 1:
                createlist(head);
                break;

                case 2:
                printlist(head);
                break;

                case 3:
                insert(head);
                break;

                case 4:
                delete(head);
                break;

                case 5:
                p=search(head);

                if(p!=-1)
                {
                 printf("\nElement is at %dth possition\n",pos);
                }
                else
                {
                    printf("Element is not in linked list\n");
                }
                break;

                case 6:
                printReverselist(temp);
                break;
                
                case 7:
                break;

                default:
                printf("\nWrong Entry........\n");
                break;
            }
    }
}