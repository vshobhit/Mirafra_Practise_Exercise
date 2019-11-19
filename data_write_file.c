#include"header.h"
extern FILE *fp_in,*fp_out;
void data_write(int *buffer,int N)
{
	int temp,ret;
	
	{

		for(int i=0;i<N;i++)
		{
		fprintf(fp_out,"%d ",buffer[i]);
		}
	
		fprintf(fp_out,"\n");
	}

	
}
