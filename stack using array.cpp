#include <stdio.h>
void push();
void pop();
void display();
int stack[100],n,i,top=-1,ch;
int main() 
{
    printf("enter stack size");
    scanf("%d",&n);
    printf("enter stack operations 1.push 2.pop 3.display 4.exit");
    do
    {
        printf("\nenter your choice::");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:printf("\nexit from the stack");
            break;
            default:
            printf("\ninvalid choice");
        }
    }while(ch!=4);
    return 0;
}
void push()
{
    int x;
    printf("enter element::");
    scanf("%d",&x);
    if(top==n-1)
    {
        printf("\nstack is full");
    }
    else
    {
        top++;
        stack[top]=x;
        printf("\nelement inserted");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\ndeleted element is %d",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        printf(" %d",stack[i]);
    }
}

