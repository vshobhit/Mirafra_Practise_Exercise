//program to understand use of merge sort

#include<stdio.h>
#include<stdlib.h>
void msort(int a[],int temporary[],int left,int right);
void merge_sort(int a[],int n);
void merge(int a[],int temporary[],int lpos,int rpos,int rend);

//main merge_sort function
void merge_sort(int a[],int n)
{
	//for storing resultant array
	int *temp;
	temp = (int*) malloc(n*sizeof(int));
	msort(a,temp,0,n-1);
	free(temp);
}

//function which breaks array into two sub array
void msort(int a[],int temporary[],int left,int right)
{
	int center;
	//condition when more than 1 elements
	if(left < right )
	{
		//divide the list into two halves
		center = (left + right)/2;

		//first half list
		msort(a,temporary,left,center);
		
		//second half list
		msort(a,temporary,center+1,right);
		
		//finally merge them after sorting
		merge(a,temporary,left,center+1,right);
	}
}


//function to sort and merge two sub arrays
void merge(int a[],int temparray[],int lpos,int rpos,int rend)
{
	
	int i,lend,num_elements,temppos;
	lend = rpos -1;
	temppos = rpos -1;
	temppos = lpos;
	num_elements = rend - lpos +1;

	//while left half and right half array exists
	while(lpos <= lend && rpos <= rend)
	{
		//if left half array element is smaller put the right half one to temporary array
		if(a[lpos] <= a[rpos])
			temparray[temppos++] = a[lpos++];
		
		else
			temparray[temppos++] = a[rpos++];
	}

	//put the remaining elements of left half array to temparray
	while(lpos <= lend)
		temparray[temppos++] = a[lpos++];

	//put the remaining elements of right half array to temparray
	while(rpos <= rend)
		temparray[temppos++] = a[rpos++];
	
	//putting elements to temparry
	for(int i=0;i<num_elements;i++,rend--)
		a[rend] = temparray[rend];
	
}

int main()
{
	int a[] = {24,13,26.1,2,27,38,15};
	int n = 8;
	printf("Array elements are\n");
	for(int i=0;i<n;i++)
		printf("%d, ",a[i]);
	printf("\n");
	merge_sort(a,n);
	printf("After sorting Array elements are\n");
	for(int i=0;i<n;i++)
		printf("%d, ",a[i]);
}

		
