#include<stdio.h>
int s[100],n,top=-1;
void push()
{
	int item;
	if(top<n-1)
	{
		printf("Enter the item to push to stack:-");
	        scanf("%d",&item);
		top++;
		s[top]=item;
	}
	else
		printf("STACK OVERFLOW");
}
void pop()
{
	int item;
	if(top<0)
		printf("STACK EMPTY");
	else
	{
		item=s[top];
		top--;
		printf("%d popped from stack",item);
	}
}
void peep()
{
	int item;
        if(top<0)
                printf("STACK EMPTY");
        else
        {
                item=s[top];
		printf("%d is at the top of the stack",item);
	}
}
void status()
{
	 if(top<0)
                printf("\nSTACK EMPTY");
	 else if(top==n-1)
		printf("\nSTACK FULL");
	 else
	{
		printf("\nThere are %d element(s) in the stack\n",top+1);
		float p=(top+1)*100/n;
		printf("\nThe stack is %f per cent filled",p);
		printf("\n\nYou can add %d elements more\n\n",n-top-1);
	}
}
void display()
{
	if(top<0)
                printf("\nSTACK EMPTY");
	else
	{
		printf("Contents of the Stack are:-");
		for(int i=0;i<=top;i++)
			printf("%d ",s[i]);
	}
}
void main()
{
	printf("\n0.Set size of Stack\n1.Push\n2.Pop\n3.Peep\n4.Status\n5.Display\n6.Exit");
	int o;
	printf("\nEnter the option:-");
	scanf("%d",&o);
	switch(o)
	{
		case 0:
		printf("Enter the size of stack ");
	        scanf("%d",&n);
		main();
		break;
		case 1:
		push();
		main();
		break;
		case 2:
		pop();
		main();
		break;
		case 3:
		peep();
		main();
		break;
		case 4:
                status();
                main();
                break;
                case 5:
                display();
                main();
                break;
                case 6:
                printf("Exiting");
                break;
		default:
		printf("INVLAID OPTION");
		main();
		break;
	}
}
