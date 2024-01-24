#include <stdio.h>

#define MAX_SIZE 5

int front = -1, rear = -1;
int queue[MAX_SIZE];

int isEmpty() {
    return front == -1;
}

int isFull() {
    return (rear + 1) % MAX_SIZE == front;
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d.\n", data);
    } else {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        queue[rear] = data;
        printf("%d enqueued to the queue.\n", data);
    }
}

int dequeue() {
    int data = -1;
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        data = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        printf("%d dequeued from the queue.\n", data);
    }
    return data;
}

void traverse() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    do {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (rear + 1) % MAX_SIZE);
    printf("\n");
}

int main() {
    int choice, data;

    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. IsEmpty\n");
        printf("4. IsFull\n");
        printf("5. Traverse\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                if (isEmpty()) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;
            case 4:
                if (isFull()) {
                    printf("Queue is full.\n");
                } else {
                    printf("Queue is not full.\n");
                }
                break;
            case 5:
                traverse();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}