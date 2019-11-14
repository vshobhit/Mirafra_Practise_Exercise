#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 10
#ifndef __HEADER__
	#define __HEADER__
	#include"header.h"
#endif


void display(int *arr ,int n);
int main()
{
	
	    //printf("Enter the number of list elements\n");
	    //scanf("%d",&n);

	    //array declared an initialised
	    int arr[] = {12,89,45,-34,0,67,12,45,-23,2};

	    //to initialised all the elements to zero
//	    memset(arr,0,N*sizeof(arr[0]));

/*	    printf("Enter the elements\n");
	    for(int i=0;i<n;i++)
	    {
		    scanf("%d,",&arr[i]);
	    }
	
*/
	    printf("The elements Entered are\n");
	    display(arr,N);
	
	while(1)
	{
	    //printf("before sorting array is \n");
	    //display(arr,N);


	    int ch;
	    printf("Enter the sorting technique\n1.Bubble Sort\n2.Insertion Sort\n3.Quick Sort\n4.Selection Sort\n5.Merge Sort\n");
	    printf("6.Exit\n");
		scanf("%d",&ch);
			
	    switch(ch)
	    {
		    case 1:
				Bsort(arr,N);
				//printing array after sorting
				display(arr,N);
				break;
		    case 2:
	            inssort(arr,N);			
				display(arr,N);
				break;
		    case 3:
	           quick_sort(arr,0,N-1,N-1);	
				display(arr,N);
				break;
		    case 4:
	            selsort(arr,N);			
				display(arr,N);
				break;
		    case 5:
	     	    merge_sort(arr,N);		
				display(arr,N);
				break;
		    case 6:
				exit(0);
			
	    }
	}
	
				
	//calling the Bsort()
//	Bsort(arr,n);

}
//function for display of elements	
void display(int *arr ,int n)
{
	for(int i = 0;i<n;i++)
		printf("%d, ",*(arr+i));
	printf("\n\n");
}
