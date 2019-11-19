#include"header.h"
//function for display of elements	
void display(int *arr ,int n)
{
	for(int i = 0;i<n;i++)
		printf("%d, ",*(arr+i));
	printf("\n\n");
}
