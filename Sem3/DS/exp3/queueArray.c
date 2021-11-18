#include<stdio.h>
#define MAX 5
int QUEUE[MAX];
int front = -1, rear = -1;
void Enqueue(int element);
void Dequeue();
void peek();
int isEmpty();
int isFull();
void display();

int main() {
    int choice, element;
        printf("\n====MENU====\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        while (choice != 5) {
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            switch (choice) {
            case 1:
                printf("Enter the element to be inserted:");
                scanf("%d", &element);
                Enqueue(element);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5: printf("Exiting...");
            default:
                printf("Wrong Choice\n");
                break;
            }
        }
        return 0;
}
int isEmpty() {
    if (front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

void Enqueue(int element)
{
    if (isFull())
    {
        printf("\n QUEUE OVERFLOW\n");
        return;
    }
    if (front == -1 || rear == -1)
    {
        front = rear = 0;
        QUEUE[rear] = element;
    }
    else
    {
        rear = rear + 1;
        QUEUE[rear] = element;
    }
    printf("\n*Element is inserted* ");
}

void Dequeue()
{
    int element;
    if (isEmpty())
    {
        printf("QUEUE UNDERFLOW\n");
    }
    else
    {
        element = QUEUE[front];
        front = front + 1;
        printf("\ndeleted element is:%d\n", element);
    }
}

void peek()
{
    if (isEmpty())
    {
        printf("QUEUE UNDERFLOW\n");
    }
    else
    {
        printf("Element present at the front of the queue is %d\n", QUEUE[front]);
    }

}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("QUEUE OVERFLOW\n");
    }
    else
    {
        printf("Elements of the queue are:");
        for (i = front;i <= rear;i++)
        {
            printf("%d\t", QUEUE[i]);
            
        }
    }
}