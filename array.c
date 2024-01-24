#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++){
printf("%d", arr[i]);
    }
    printf("\n");
}

void insertion( arr,  size, element, index, capacity)
{
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;

}

int main()
{
    int arr[100]={2,6,8,90};
    int size=4, index=3, element=78;
    display(arr,size);
    indInsertion(arr)
}