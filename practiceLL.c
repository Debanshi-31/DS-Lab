#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
struct node* head = NULL;
void create()
{
    if(head==NULL)
    {
        int p,i;
        printf("enter the number of nodes\n");
        scanf("%d",&p);
        if(p!=0)
        {
            int data;
            struct node* newnode;
            struct node* temp;
            newnode =malloc(sizeof(struct node));
            head=newnode;
            temp=head;
            printf("enter number to be inserted\n")
            scanf("%d";data);
            head->info=data;
            for(i=2;i<=p;i++)
            {
                newnode = malloc(sizeof(struct node));
				temp->link = newnode;
				printf("\nEnter number to be inserted : ");
				scanf("%d", &data);
				newnode->info = data;
				temp = temp->link;

            }

        }


    }
    else
    printf("Linked List already created");
}
void insertatpos()
{

}
void deleteatpos()
{

}
void search()
{

}
void sort()
{

}
void reverse()
{
    
}

int main()
{
    int n;
    printf("1.Insert At Position");
    printf("1.Insert At Position");
    printf("1.Insert At Position");
    printf("1.Insert At Position");
    printf("1.Insert At Position");
    printf("Enter Your Choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        insertatpos();
        break;
        case 2:

    }

}