#include <stdio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int element) 
{
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = element;
        printf("Element enqueued successfully.\n");
    }
}

void dequeue() 
{
    if (front == -1) 
    {
        printf("Queue is empty. Cannot dequeue.\n");
    } else
    {
        printf("Element dequeued: %d\n", queue[front]);
        if (front == rear) 
        {
            front = rear = -1;
        } else 
        {
            front++;
        }
    }
}

void isEmpty() 
{
    if (front == -1) 
    {
        printf("Queue is empty.\n");
    } 
    else 
    {
        printf("Queue is not empty.\n");
    }
}

void isFull() {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full.\n");
    } else {
        printf("Queue is not full.\n");
    }
}

void traverse() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d  ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, element;
    int flag = 1;

    while (flag) {
        printf("\nMain Menu\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. IsEmpty\n");
        printf("4. IsFull\n");
        printf("5. Traverse\n");
        printf("6. Exit\n");

        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                isFull();
                break;
            case 5:
                traverse();
                break;
            case 6:
                flag = 0;
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}