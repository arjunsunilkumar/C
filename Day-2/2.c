#include<stdio.h>
int s[100],n=-1,top=-1,n2,top2=-1;
void push(int sn)
{
if(sn==1)
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
else if(sn==2)
{
        int item;
        if(top2<n2-1)
        {
                printf("Enter the item to push to stack:-");
                scanf("%d",&item);
                top2++;
                s[top2]=item;
        }
        else
                printf("STACK OVERFLOW");
}

}
void pop(int sn)
{
if(sn==1)
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
else if(sn==2)
{

        int item;
        if(top2<0)
                printf("STACK EMPTY");
        else
        {
                item=s[top2];
                top2--;
                printf("%d popped from stack",item);
        }
}

}
void peep(int sn)
{
if(sn==1)
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
else if(sn==2)
{
        int item;
        if(top2<0)
                printf("STACK EMPTY");
        else
        {
                item=s[top2];
                printf("%d is at the top of the stack",item);
        }
}

}

void status(int sn)
{
if(sn==1)
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
else if(sn==2)
{

         if(top2<0)
                printf("\nSTACK EMPTY");
         else if(top2==n2-1)
                printf("\nSTACK FULL");
         else
        {
                printf("\nThere are %d element(s) in the stack\n",top2+1);
                float p=(top2+1)*100/n2;
                printf("\nThe stack is %f per cent filled",p);
                printf("\n\nYou can add %d elements more\n\n",n2-top2-1);
        }
}

}
void display(int sn)
{
if(sn==1)
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
else if(sn==2)
{
        if(top2<0)
                printf("\nSTACK EMPTY");
        else
        {
                printf("Contents of the Stack are:-");
                for(int i=n;i<=top2;i++)
                        printf("%d ",s[i]);
        }
}

}
void main()
{
	int sn;
	if(n==-1)
	{
		printf("Enter the size of stack 1:-");
		scanf("%d",&n);
		printf("Enter the size of stack 2:-");
		scanf("%d",&n2);
		top=-1;
		top2=n-1;
		n2=n2+n;
	}
	printf("\nChoose Stack 1 or Stack 2:-");
	scanf("%d",&sn);
	if(sn!=1&&sn!=2)
	{
		printf("INVALID OPTION\n");
		main();
	}
	printf("\n1.Push\n2.Pop\n3.Peep\n4.Status\n5.Display\n6.Exit");
	int o;
	printf("\nEnter the option:-");
	scanf("%d",&o);
	switch(o)
	{
		case 1:
		push(sn);
		main();
		break;
		case 2:
		pop(sn);
		main();
		break;
		case 3:
		peep(sn);
		main();
		break;
		case 4:
                status(sn);
                main();
                break;
                case 5:
                display(sn);
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
