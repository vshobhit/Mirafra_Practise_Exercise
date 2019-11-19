#include"header.h"
void print_time(int start,int end)
{
		
	double cpu_time = ( (double) (end - start))/CLOCKS_PER_SEC;
	printf("cpu _time (in ms)= %lf\n",cpu_time);
} 
