#include<stdio.h>
void insert(int arr[],int n)
{
    int m,i,pos;
    printf("Enter the Element to be inserted\t");
    scanf("%d",&m);
    printf("Enter position\t");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=m;
    for(i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
}


void delete(int n,int arr[])
{
int pos,i;
    printf("Enter Position to Delete: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
}

void search(int  n,int arr[])
{
int element,i,c=0;
    printf("Enter the element you want to search : ");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            c=1;
            printf("%d is Found on position %d.",element,i+1);
            break;
        }
    }
    if(c==0) printf("%d is not Found.",element);
}


void traversal(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


int main()
{
    int n,i,p;
    printf("Enter size n\n");
    scanf("%d",&n);
    int arr[20];
    printf("Enter array element\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",&arr[i]);
    }
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Linear Search\n");
    printf("4.Traverse\n");
    printf("5.Exit\n");
    printf("Enter option :\t");
    scanf("%d",&p);

switch (p)
{
case 1:
    insert(arr,n);
    break;
    case 2:
    delete(arr,n);
    break;
    case 3:
    search(arr,n);
    break;
    case 4:
    traverse(arr,n);
    break;
    case 5:
    break;
default:
    printf("Wrong choice");
}
return 0;
}

