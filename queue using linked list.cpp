#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *new_n;
    int d;

    new_n = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter element: ");
    scanf("%d", &d);

    new_n->data = d;
    new_n->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = new_n;
    }
    else
    {
        rear->next = new_n;
        rear = new_n;
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;

    if (front == NULL && rear == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nDeleted node is %d", front->data);
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;

    if (front == NULL && rear == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

 int main()
{
    int ch;

    while (1)
    {
        printf("\n\nQUEUE OPERATIONS ARE:");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
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
            break;

        default:
            printf("\nInvalid choice, try again.");
        }
    }
}
