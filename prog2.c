#include<stdio.h>
#include<stdlib.h>
int sum(int *q,int n);
int main()
{
    int n;
    printf("enter size of the array");
    scanf("%d",&n);
    int*p=(int*)malloc(n*sizeof(int));
    printf("enter array elements");
    for(int i=1;i<n;i++)
    {
        scanf("%d",&p[i]);
        int s=sum(p,n);
        printf("sum of array=%d\n",s);
        free(p);
        return 0;
    }
}
    int sum(int *q,int n)
    {
        
        int s=0;
        for(int i=0;i<n;i++)
            s=s+q[i];
            return s;
    }

