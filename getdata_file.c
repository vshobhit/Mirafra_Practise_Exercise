#include"header.h"

extern FILE *fp_in; 
void getdata_file(int *buffer,int *N)
{
	int temp,ret;

	
	if(	 (fscanf(fp_in,"%d",N) )!= EOF) 	
	
	{	
	//fscanf(fp_in,"%d",N);	
		printf("\nN = %d\n",*N);
		
		
		for(int i=0;i< *N;i++)
		{
			fscanf(fp_in,"%d",&temp);	
			buffer[i] = temp;
		}
	
	}
	else
	{
		printf("End of file reached\n");
		memset(buffer,'#',MAX);
	}

		/*printf("\nAfter reading from file\n")	;
		for(int i=0;i< *N;i++)
			printf("%d ",buffer[i]);*/
		printf("\n");
		
}
