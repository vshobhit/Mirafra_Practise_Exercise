#include"header.h"
extern FILE *fp_in,*fp_out;
void compare_file_data(int *buffer,int N,int *cur_p)
{
	
	int flag=1,temp;
	int cur_pos = ftell(fp_out);
	printf("cur_pos = %d cur_p = %d\n ",cur_pos,*cur_p);

	fseek(fp_out,-(cur_pos - *cur_p) ,SEEK_CUR);

	cur_pos = ftell(fp_out);
	printf("cur_pos = %d, cur_p = %d\n ",cur_pos,*cur_p);
	printf("N = %d\n",N);
	for(int i=0;i<N;i++)
	{
		fscanf(fp_out,"%d ",&temp);
		printf("temp = %d\n",temp);
		if(temp != buffer[i])
		{
			flag = 0;
			break;
		
		}
	}
	if(flag == 0)
		printf("NO\n\n");
	else
		printf("YES\n");

} 
