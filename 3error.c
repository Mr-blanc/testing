#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX 10

int rear = -1, front =-1,k[MAX],a;

void quein()
{
	if (rear == MAX-1)
	printf("Queue overflow\n");
	else
	{
		if (front == -1)
		front=0;
		a = rand();
		rear = rear + 1;
		k[rear] = a;
		printf("%d\n",&a);
		
	}		
}

void queout()
{
  if (front== -1 || front > rear)
  {
    printf("Queue Underflow\n");
    return ;
  }
  else
  {
    printf("%d please come to counter\n",k[front]);
    front=front;
  }
}

int main()
{
	
	printf("Welcome to Coupon system\n");
	do{
		printf("\n-----Menu-----\n\nEnter yout choice\n");
		printf("1. Get coupon\n2. Call coupon\n3. exit\n");
		scanf("%d",&ch)
		switch(ch);
		{
			case 1: 
			printf("your coupon number is: "); quein; break;
			case 2: printf("coupon no : "); queout; break;
			case 3: exit
			default : printf("Enter valid option"); break;
		}
	}while(ch!=3)
}
