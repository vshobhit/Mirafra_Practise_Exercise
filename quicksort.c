/*program to understand quicksort*/
#include<stdio.h>
#define SIZE 12

static int cnt=1;

void qsort(int* arr,int low,int up,int n);
int partition(int *arr,int low,int up,int n);
void swap(int* x,int* y);
void display(int* arr,int n);
int main()
{
	//input array
	int arr[] = {48,44,19,59,72,80,42,65,82,8,95,68};
	
	printf("before quicksort the elements are\n");
	display(arr,SIZE);
	qsort(arr,0,SIZE-1,SIZE);
	printf("after quicksort the elements are\n");
	display(arr,SIZE);

}

void display(int* arr,int n)
{
	
	for(int i=0;i<SIZE;i++)
		printf("%d, ",arr[i]);
	printf("\n\n");
}

void qsort(int* arr,int low,int up,int n)
{
	/*condition when there's only one element or no elements*/
	if(low>=up)
		return;
	/*function that returns pivot element*/
	int pivot = partition(arr,low,up,n);
	
	//for left half of pivot
	qsort(arr,low,pivot-1,n);
	
	//for right half of pivot
	qsort(arr,pivot+1,up,n);
}

int partition(int *arr,int i,int j,int n)
{
	/*pivot is taken as first element*/
	int pivot = i;
	int low = i+1;
	int up = j;
	/*while low crosses up*/
	while(low <= up)
	{
		while ( (arr[low] < arr[pivot]) && (low < j) )
		{
				++low;

		}
		while (arr[up] > arr[pivot] )
		{
			--up;
		}
		if(low < up)
		{
			swap(arr+low,arr+up);
			up--;
			low++;
			
		}
		else
		{
			++low;
				
		}
	
	}
	swap(arr+up,arr+pivot);
	cnt++;
	return up;
}

void swap(int* x,int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
		

