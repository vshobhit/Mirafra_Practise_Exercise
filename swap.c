#include"header.h"
//function for swapping two numbers when both are passed by reference
void swap(int* x,int*y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	
}
