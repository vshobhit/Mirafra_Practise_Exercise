/*program to understand selection sort*/
/*complexity = O(n^2);*/

#include<stdio.h>

//size of the array
#define SIZE 7

//comment for checking
//3rd coment
void selsort(int *arr,int n);
void swap(int *x,int *y);
void display(int *arr,int n);
int main()
{
	int arr[SIZE] = {12,43,0,56789,-567,34,-45};
	
	//int arr[] =  {10,20,30,40,50,60,70};
	printf("Before sorting the elements are\n");
	display(arr,SIZE);
	
	selsort(arr,SIZE);
	printf("After sorting the elements are\n");
	display(arr,SIZE);
}

void selsort(int *arr,int n)
{
	int small,i,cnt=0;
	for(int i=0;i<n-1;i++)
	{
		 small = i;
		for(int j=i+1;j<n;j++)
		{
			if( *(arr+j) < arr[small])
			{
				small = j;
			}
			
		}
		//for initially checking whether array is sorted or not
		if(cnt == 0)
		{	
		//if in 1st pass the value doesn't change it means array is already sorted
		
				cnt++;
			 if(small == i)
			{
				printf("in return\n");
				return;
			}
		}
		/*put smallest value at 0th place*/
		swap(&arr[i],&arr[small]);
	}
}

void swap(int* x,int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
		printf("%d, ",arr[i]);
	printf("\n\n");
}
