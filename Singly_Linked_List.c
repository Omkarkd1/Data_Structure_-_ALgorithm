#include<stdio.h>
#include<stdlib.h>
int pos=0,n;
struct node *temp;
typedef struct node
{
    int data;
    struct node *next;
}Node;
struct node* createlist(struct node *head)
{
    int i;
    printf("Create List......\n\n");
    printf("Enter number of nodes\t");
    scanf("%d",&n);
    struct node *temp,*nextnode;
    temp=head;
    for(i=0;i<n;i++)
    {
        nextnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter %dth node data:-\t",i+1);
        scanf("%d",&nextnode->data);
        nextnode->next=NULL;
        temp->next=nextnode;
        temp=nextnode;
    }
}
void printlist(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d-->",head->data);
        head=head->next;
    }
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
int search(struct node* head)
{
    int key,pos=0;
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
void printReverselist(struct node* temp)
{
}
void sort(struct node* head)
{
}
void main()
{
    struct node *head;
    int menu;
    int p;

    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    while(menu !=8)
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
                sort(head);
                case 8:
                break;

                default:
                printf("\nWrong Entry........\n");
                break;
            }
    }
}
