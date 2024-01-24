#include<stdio.h>
int main()
{
    int n,arr[20][20],i,j;
    printf("Enter the size of the square matrix\t");
    scanf("%d",n);
    printf("Enter elements of the matrix\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%d %d",arr[i][j]);
        }
    }

}