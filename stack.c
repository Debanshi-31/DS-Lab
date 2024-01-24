#include<stdio.h>
#define MAX 4
struct stack
{
    int s[MAX];
    int top;

};
struct stact s1;
s1.top=-1;

void push()
{
    int element;
    printf("Enter the element to be pushed\n");
    scanf("%d",&element);
    if(s1.top==MAX-1)
    {
        printf("overflow");
    }
    else{
        s1.top++;
        s1.s[s1.top]=element;
    }
}