#include<stdio.h>
int main()
{
	int array[10],i,num;
	printf("enter the no of elements in array: ");
	scanf("%d",&num);
	printf("enter the elements of array\n");
	for(i=1;i<=num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("even numbers in a array: ");
	for(i=1;i<=num;i++)
	{
		if(array[i]%2==0)
		{
			printf("%d\t",array[i]);
		}
	}
	printf("\nodd numbers in a array: ");
	for(i=1;i<=num;i++)
	{
		if(array[i]%2!=0)
		{
			printf("%d\t",array[i]);
		}
	}

}
