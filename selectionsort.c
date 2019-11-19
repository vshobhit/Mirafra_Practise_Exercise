/*program to understand selection sort*/
/*complexity = O(n^2);*/
#include"header.h"



void selsort(int *arr,int n,int * temparray)
{

	int start = clock();

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
				int end = clock();
				print_time(start,end);
				
				return;
			}
		}
		/*put smallest value at 0th place*/
		swap(&arr[i],&arr[small]);
	}
	//copying elements from array arr to temparray
	for (int i=0;i<n;i++)
		temparray [i] = arr[i];


	int end = clock();
	print_time(start,end);

}
