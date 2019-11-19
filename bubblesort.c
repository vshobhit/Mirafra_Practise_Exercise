/*program to understand bubblesort*/


#include"header.h"
/*here largest element goes downwards*/
void Bsort(int *arr,int n,int* temparray)
{
	clock_t start,end;
	start = clock();
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
//				printf("count = %d\n",count);	
			}
		}
			//for no swap condition
			//condition for exiting out of function when no swap occurs
			if(count == 0)
			{
				
				//copy elements to temparray
				for(int i=0;i<n;i++)
				{
					
					
					temparray[i] = arr[i];
				}
				end = clock();
				print_time(start,end);
				return;
			}
		
	}
	end = clock();
	print_time(start,end);

}

