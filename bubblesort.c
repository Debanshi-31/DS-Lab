#include <stdio.h>
void bubbleSort(int arr[],int size)
{
  int i,j,temp=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The sorted elements\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(void)
{
int arr[100];
int i;int size;
printf("enter size of array\n");
scanf("%d",&size);
printf("enter array elements\n");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
return 0;
}