#include <stdio.h>
#include <stdlib.h>
#define max 20
int stack[max];
int top = 0, x;




void push(int x) 
{
    if (top >= max)
        printf("Stack OVERTFLOW\n");
    else
    {
        stack[top] = x;
        top++;
    }
}

int pop()
{
    if (top <= 0)
        printf("Stack UNDERFLOW\n");
    else
    {
        top--;
        x = stack[top];
    }
    return x;
}

int isempty() 
{
    if (top <= 0)
        return 1;
    else
        return 0;
}

int isfull()
{
    if (top >= max)
        return 1;
    else
        return 0;
}

void main()
{
    int ch, item, d;
    char a;
    printf("\n\t Stack Implementation");
    printf("\n\t1.PUSH");
    printf("\n\t2.POP");
    printf("\n\t3.IsEmpty");
    printf("\n\t4.IsFull");
    while(ch!=0)
    {
        printf("\n\t Enter Your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter an Element to PUSH: \n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            x = pop();
            printf("The element POP out from Stack is %d", x);
            break;
        case 3:
            x = isempty();
            if (x == 1)
                printf("Stack is Empty");
            else
                printf("Stack is Not Empty");
            break;
        case 4:
            x = isfull();
            if (x == 1)
                printf("Stack is Full");
            else
                printf("Stack is Not Full");
            break;
        default:
            printf("INVALID Choice\n");
        }
    }

}
