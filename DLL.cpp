#include<stdio.h>
#include<stdlib.h>

	struct node		
	{
		int data;
		struct node *rlink,*llink;
	};
	struct node *start=NULL,*temp=NULL,*last=NULL,*t1=NULL,*t2=NULL;
		
	void firstinsert()	
	{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter an Element to store in NODE");
	scanf("%d",&e);
			
	temp->data=e;
	temp->llink=NULL;
	temp->rlink=NULL;
			
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->rlink=start;
		start=temp;
		last->llink=temp;
	}
	}
		
	void lastinsert()
	{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter an element to store in Node");
	scanf("%d",&e);
	temp->data=e;
	temp->rlink=NULL;
	temp->llink=NULL;
			
	if(start==NULL)
	{
		start=temp;	
		last=temp;
	}
	else
	{
		last->rlink=temp;
		temp->llink=last;
		last=temp;
	}
				
	}
	
	void middleinsert()	
	{
	int e,pos,i=1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter an element to store in Node");
	scanf("%d",&e);
	temp->data=e;
	temp->llink=NULL;
	temp->rlink=NULL;
					
	printf("\n Enter the postion to insert");
	scanf("%d",&pos);
			
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
	printf("\n Insdie of middle insert fun");
	t1=start;
	while(i<pos)
	{
		t2=t1;
		t1=t1->rlink;
		i++;
	}
				
	temp->rlink=t1;
	t1->llink=temp;
	t2->rlink=temp;
	temp->llink=t2;
				
	}
	}
				
	void firstdelete()	 
	{
	if(start==NULL)
	{
	printf("\n\t Linked List is Empty, No Nodes to perform Delete Operation");
	}
	else
	{
		t1=start->rlink;
		start=start->rlink;
		t1->llink=NULL;
		printf("\n\t First Node is Deleted Successfully");
	}
	}
		
	void lastdelete()	
	{
	if(start==NULL)
	printf("\n\t No Nodes in Linked List to delete");
	else
	{
		t1=last->llink;
		t1->rlink=NULL;
		last=t1;
	}
	}
		
	void middledelete()	
	{
	int pos,i=1;
	printf("\nEnter the position to delete the Node");
	scanf("%d",&pos);
	if(start==NULL)
	printf("\n\tNo Element to Delete, Linked List is EMPTY");
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->rlink;
			i++;
		}
				
		t2->rlink = t1->rlink;
		t1->rlink->llink = t2;
	}
	}
		
	void disp()
	{
	if(start==NULL)
	{
	printf("\nNo elements in Linked List......................");
	}
	else
	{
	printf("\n\t\t Double Linked List elements START to LAST NODE are...................\n\t:");
	t1=start;
    while(t1!=NULL)
    {
	printf("%d",t1->data);
	t1=t1->rlink;
	}
				
	}
	}
				
	
	int main()
	{
		int ch;
		while(1)
		{
			
			printf("\n\t\t\t-----Doubly Linked List Operations-------");
			printf("\n\n\t\t1. First Insert");
			printf("\n\n\t\t2. Last Insert");
			printf("\n\n\t\t3. Middle Insert");
			printf("\n\n\t\t4. First Delete");
			printf("\n\n\t\t5. Last Delete");
			printf("\n\n\t\t6. Middle Delete");
			printf("\n\n\t\t7. display");
			printf("\n\n\n\n\t\t9.Exit");
		
			printf("\n\n\tEnter your Choice...");
			scanf("%d",&ch);
		
			switch(ch)
			{
				case 1:	firstinsert();		break;
				case 2: lastinsert();		break;
				case 3: middleinsert();		break;
				case 4: firstdelete();		break;
				case 5:	lastdelete();		break;
				case 6:	middledelete();		break;
				case 7: disp();				break;
				case 8: exit(0);
				default:printf("\n Invaild choise");
			} 
			
		} 
		
		return 0;
	}
