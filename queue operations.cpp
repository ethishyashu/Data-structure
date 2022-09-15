/*Queue implimentation using array*/
#include <stdio.h>
#define MAX 50
void enqueue();//Inserts an element to the queue from the rear end of the queue.
void dequeue();//Deletes an element from the front end of the queue
void display();//Displays the elements in the queue
int queue[MAX];//Array to be used as queue
int rear=-1;//the end of the sequence at which elements are added
int front=-1;//the end at which elements are removed
int main()
{
	int ch;
	do
	{
		printf("\nEnter your choice\n1:Enqueue\t2:Dequeue\t3:Display\t4:Quit\n");
		scanf("%d",&ch);//Takes the choice of the user from the given four options
		switch(ch)
		{
			case 1:enqueue();//enqueue
				break;
			case 2:dequeue();//dequeue
				break;
			case 3:display();//display
				break;
			case 4:break;//quit
			default:printf("Enter a valid choice\n");//for choices other than the specified ones
		}//switch case for the given four options
	}while(ch!=4); //do-while loop continues till user chooses to quit
	return 0;
}//end of main
void enqueue()
{
	int new_item;//new element to be enqueued
	if(rear==MAX-1)
	{
		printf("Queue overflow\n");//if queue is already full
	}
	else
	{
		if(front==-1)
		front=0;	
		printf("Enter the number to be entered: ");
		scanf("%d",&new_item);
		rear+=1;//increment rear by 1
		queue[rear]=new_item;//adds new element at the rear
	}	
}
void dequeue()
{
	if(front==-1||front>rear)
		printf("Queue underflow\n");//if queue is empty
	for(int i=front;i<=rear;i++)
	{
		queue[i]=queue[i+1];
	}//removes an element from the front 
	rear-=1;//decrement rear by 1
}
void display()
{
	if(front==-1)
	{
		printf("\nQueue is empty\n");
	}
	else
	{	
		printf("\nThe queue is:\n");
		for (int i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
	

