#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
void insert()
{
	printf("\n1.Insert at Beginning\n2.Insert at End\n3.After a data");
	int c,s;
	scanf("%d",&c);
	struct node *temp=(struct node*)malloc(sizeof(struct node)),*a;
	printf("Enter the element to be inserted ");
        scanf("%d",&temp->data);
	switch(c)
	{
		case 1:
		{
			temp->next=head;
			head=temp;
			break;
		}
		case 2:
		{
			a=head;
			while(a->next!=NULL)
				a=a->next;
			a->next=temp;
			temp->next=NULL;
			break;
		}
		case 3:
		{
			a=head;
			int t,f=0;
			printf("Enter element after which to be inserted ");
			scanf("%d",&s);
			while(a!=NULL)
			{
				if(a->data==s)
				{
					f=1;
					temp->next=a->next;
					a->next=temp;
					break;
				}
				else
					a=a->next;
			}
			if(f==0)
				printf("NOT FOUND\n");
			break;
		}
		default:
			printf("INVALID OPTION\n");
	}
}
void deletion()
{
	if(head==NULL)
		printf("LIST EMPTY\n");
	else
	{
		struct node *temp;
		printf("\n1.Delete at Beginning\n2.Delete at End\n3.Specific Node\n4.xx\n");
        	int c,s;
        	scanf("%d",&c);
		switch(c)
		{
			case 1:
			{
				temp=head;
				printf("%d is being deleted\n",head->data);
				head=head->next;
				free(temp);
				break;
			}
			case 2:
			{
				temp=head;
				while((temp->next)->next!=NULL)
					temp=temp->next;
	                        printf("%d is being deleted\n",temp->next->data);
				free(temp->next);
				temp->next=NULL;
				break;
			}
			case 3:
			{
				temp=head;
				int f=0;
				printf("Enter element to be deleted ");
        	                scanf("%d",&s);
				struct node *tempp;
	                        while(temp->next!=NULL)
				{
					tempp=temp->next;
                	                if(tempp->data==s)
                        	        {
                                	        f=1;
						temp->next=tempp->next;
					}
					else
						temp=temp->next;
				}
				if(f==0)
	                                printf("NOT FOUND\n");
				break;
			}
			default:
	                        printf("INVALID OPTION\n");
		}
	}
}
void display()
{
        if(head==NULL)
                printf("LIST EMPTY\n");
	else
	{
	        struct node *temp;
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
void main()
{
	printf("1.Insert\n2.Delete\n3.Display\n4.exit\nEnter the option:-");
	int c;
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				insert();
				main();
				break;
			}
		case 2:
			{
				deletion();
				main();
				break;
			}
		case 3:
			{
				display();
				main();
				break;
			}
		default:
                        printf("INVALID OPTION\n");
	}
}
