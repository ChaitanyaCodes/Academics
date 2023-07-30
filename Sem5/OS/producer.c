#include <stdio.h>
#define SIZE 5
char items[SIZE];
int front = -1, rear = -1;
int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
  return 0;
}

int isEmpty() {
  if (front == -1) return 1;
  return 0;
}

void produce(char element) {
  if (isFull())
    printf("\n Buffer is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
  }
}

int consume() {
  int element;
  if (isEmpty()) {
    printf("\n Buffer is empty !! \n");
    return (-1);
  } else {
    element = items[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
else {
      front = (front + 1) % SIZE;
    }
    printf("\n Consumed -> %c \n", element);
    return (element);
  }
}

void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Buffer\n");
  else {
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%c ", items[i]);
    }
    printf("%c ", items[i]);
  }
}

int main() {
    int choice;
    printf("\n1.Produce\n2.Consume\n3.Display Buffer\n4.Exit");
    do{
    printf("\nMake your choice : ");
    scanf("%d",&choice);
    switch (choice) {
    case 1:
      produce('P');
      display();
      break;
    case 2:
      consume();
      display();
      break;
    case 3:
      display();
      break;
    case 4:
      break;
    default:
      printf("Make a valid choice!\n\n");
    }
  }while(choice != 4);
  return 0;
}

