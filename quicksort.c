/*program to understand quicksort*/

#include"header.h"



void quick_sort(int *arr,int low,int up,int n,int *temparray)
{
	int start = clock();
	int pivot;
	/*condition when there's only one element or no elements*/
	if(low>=up)
	{
		//copying elements from array arr to temparray
	for (int i=0;i<n;i++)
		temparray [i] = arr[i];

		return;
	}
	/*function that returns pivot element*/
	pivot = partition(arr,low,up,n);
	
	//for left half of pivot
	quick_sort(arr,low,pivot-1,n,temparray);
	
	//for right half of pivot
	quick_sort(arr,pivot+1,up,n,temparray);
	int end = clock();
	print_time(start,end);
}

int partition(int *arr,int i,int j,int n)
{
	int cnt = 0;
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
	return up;
}

		
		
	
	
