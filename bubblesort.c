/*program to understand bubblesort*/
#include<stdio.h>

//for memset()
#include<string.h>

#define SIZE 7
void swap(int *x,int *y);
void Bsort(int *arr,int n);
void display(int *arr ,int n);


/*here largest element goes downwards*/
void Bsort(int *arr,int n)
{
	//loop runs until the element exists
	for(int i=0;i<n;i++)
	{
		//count is initialised with zero for further increment
		int count = 0;
		
		/*loop will execute one element less from last*/
		for(int j=0;j<n-i-1;j++)
		{
			//if the first element is greater than next element 
			//It means to swap the neighbourhood elements only when the 
			//first element is greater than next one.
			if(arr[j] > arr[j+1])
			{
				//swap function for swapping the two neighbour elements in array
				swap(&arr[j],&arr[j+1]);
				
				//count for increment everytime swap happens 
				//If in this loop swap doesn't occured that means array becomes sorted.
				count++;
				//printf("count = %d\n",count);	
			}
		}
			//for no swap condition
			//condition for exiting out of function when no swap occurs
			if(count == 0)
			{
				return;
			}
		
	}
}

//function for swapping two numbers when both are passed by reference
void swap(int* x,int*y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	
}

//function for display of elements	
void display(int *arr ,int n)
{
	for(int i = 0;i<n;i++)
		printf("%d, ",*(arr+i));
	printf("\n\n");
}
		
