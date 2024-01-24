#include<stdio.h>
void compare(int *p,int *q)
{
if(*p>*q)
{
    printf("\n%d is Greater then %d \n",*p,*q);
}
else if(*q>*p)
{
    printf("\n%d is Greater then %d \n",*q,*p);
}
else
{
    printf("\n%d is equal to %d \n",*p,*q);
}
}
int main()
{
    int a,b;
    printf("Enter the vlaue of a and b\n");
    scanf("%d %d ",&a,&b);
    compare(&a,&b);
    return 0;
}