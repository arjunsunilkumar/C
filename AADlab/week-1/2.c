#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double m;
clock_t t1,t2;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void display()
{
	struct node*temp;
    	temp=(struct node*)malloc(sizeof(struct node));
    	temp=head;
    	if(temp==NULL)
        	printf("No more elements\n");
    	else
    	{
		printf("The elements in the linked list are:\n");
        	while(temp!=NULL)
        	{
            		printf("%d",temp->data);
            		temp=temp->next;
            		printf("\n");
        	}
    	}
}
void insb()
{
	int x;
    	struct node*newnode,*temp;
    	newnode=(struct node*)malloc(sizeof(struct node));
    	temp=(struct node*)malloc(sizeof(struct node));
    	printf("Enter the element\n");
    	scanf("%d",&x);
    	newnode->data=x;
    	newnode->next=NULL;
   	temp=head;
    	if(head==NULL)
    	{
        	head=newnode;
    	}
}
void inse()
{
	int x;
    	struct node*temp;
    	struct node*newnode;
   	printf("Enter the element\n");
    	scanf("%d",&x);
    	temp=(struct node*)malloc(sizeof(struct node));
   	newnode=(struct node*)malloc(sizeof(struct node));
    	newnode->data=x;
    	newnode->next=NULL;
    	if(head==NULL)
    	{
        	head=newnode;
    	}
    	else
   	{
        	temp=head;
        	while(temp->next!=NULL)
            		temp=temp->next;
        	temp->next=newnode;
    	}
}
void db()
{
	struct node*temp,*list;
    	int t;
    	list=(struct node*)malloc(sizeof(struct node));
    	temp=(struct node*)malloc(sizeof(struct node));
    	list=head;
    	temp=head;
     	t=temp->data;
    	if(head==NULL)
        	printf("Empty");
    	else
        	printf("Deleted element is %d",t);
    	printf("\n");
    	list=list->next;
    	head=list;
   	free(temp);
}
void ds()
{
    	int x,h=0;
    	struct node *temp,*back;
    	temp=head;
    	if(temp==NULL)
        	printf("List empty\n");
    	else
    	{
        	printf("Enter the element to be deleted\n");
        	scanf("%d",&x);
        	if(temp->data==x)
        	{
            		h=1;
            		db();
        	}
        	else
        	{
            		while(temp->next!=NULL)
            		{
                		if(temp->data==x)
                		{
                    			h=1;
                    			back->next=temp->next;
                    			free(temp);
                    			printf("Deleted element is %d",x);
                		}
                		else
                		{
					back=temp;
                    			temp=temp->next;
                		}
            		}
        	}
  	}
}
void next()
{
	struct node *temp;
        temp=head;
	int g;
	printf("Enter the element");
	scanf("%d",&g);
	while(temp->next!=NULL)
        {
        	if(temp->data==g)
        	{
        		label :
        		if((temp->data)>g)
        		{
        			printf("%d",temp->data);
        			break;
        		}
        		else
       			{
				temp=temp->next;
        			goto label;
        		}
        	}
        	else
        		temp=temp->next;
        }
}
void main()
{
	int c,d,o;
	insb();
	t1=clock();
	do
	{
		inse();
		printf("Do you want to continue?\n");
		scanf("%d",&c);

	}while(c==1);
	display();
	do
	{
		printf("Enter your choice\n1.Remove\n2.Next\n");
		scanf("%d",&d);
		if(d==1)
		{
			
			ds();
			display();
			
		        
		}
		else if(d==2)
		{
			
			next();
			

		}
		else
			printf("invalid choice");
		printf("Do you want to continue?");
		scanf("%d",&o);
	}while(o==1);
			t2=clock();
		        m=(t2-t1)/(double)CLOCKS_PER_SEC;
        		printf("%f",m);

}
