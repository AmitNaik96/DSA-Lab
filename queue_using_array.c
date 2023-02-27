/*C Program to implement a queue using arrays*/
#include <stdio.h>
#include <stdlib.h>
#define N 4
int queue[N];
int front = -1;
int rear = -1;
void enqueue();
void dequeue();
void display();
void main()
{
    while (1)
    {
        int choice;
        printf("enter the choice 1.enqueue 2. dequeue 3.display 4. exit\n");
        scanf("%d", &choice); // reads the option from the user
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice\n");
        }
    }
}
void enqueue() // function for inserting an element in a queue
{
    int x;
    if (rear == N - 1)
        printf("overflow\n");
    else
    {
        printf("enter the value to be inserted :\n");
        scanf("%d", &x);
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[front] = x;
        }
        else
        {
            rear++;
            queue[rear] = x;
        }
    }
}
void dequeue() // function for deleting the element from the queue
{
    if (front == -1 && rear == -1)
    {

        printf("underflow\n");
    }
    else if (front == rear)
    {
        printf("the dequeued element is %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("the dequeued element is %d\n", queue[front]);
        front++;
    }
}
void display() // function for displaying the elemrnts in the queue
{
    if (front == -1 && rear == -1)
    {

        printf("underflow\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d|", queue[i]);
        }
        printf("\n");
    }
}
