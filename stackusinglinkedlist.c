#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
	}*start,*p,*q,*r,*top;
	void main()
	{
		int i,newno,choice,res;
		start=NULL;
		do
		{
			printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
			printf("Enter your choice:");
			scanf("%d",&choice);
			switch(choice)
			{
			  case 1:
			  p=(struct node*)malloc(sizeof(struct node));
			  printf("Enter the no:\n");
			  scanf("%d",&p->info);
			  if(start==NULL)
			  {
			  	start=p;
			  	p->next=NULL;
			  	top=p;
			}
				  else
				  {
				  	top->next=p;
				  	p->next=NULL;
				  	top=p;
				  }
				  printf("element %d inserted in stack",top->info);
				  break;
				  case 2:
				  	if(start==NULL)
				  	printf("Underflow.stack is empty\n");
				  	else if(start->next==NULL)
				  	{
				  		printf("Element popped is:%d\n",top->info);
				  		free(top);
				  		start=NULL;
					  }
					  else
					  {
					  	q=start;
					  	while(q->next!=NULL)
					  	{
					  		r=q;
					  		q=q->next;
						  }
						  printf("Element popped is:%d\n",top->info);
						  r->next=NULL;
						  top=r;
						  free(q);
					}
					break;
					case 3:
						if(start==NULL)
						printf("Stack is empty\n");
						else
						{
							q=start;
							while(q!=NULL)
							{
								printf("%d\t",q->info);
								q=q->next;
							}
						}
						break;
						case 4:
						{
							exit(1);
						}
					  }
					  printf("\nDo you want to continue.Press 1 for yes:");
					  scanf("%d",&res);
			}
		while(res==1);
	}
	
	
	
	
	
