#include"header.h"

extern FILE* fp_in,*fp_out;
//function to open both files in corresponding modes
void file_open()
{
	char filename[100];
	if( (fp_in = fopen("test_code.txt","r") ) == NULL)
	{
		perror("Error in opening file\n");
	}
	else
		printf("test_code.txt file successfully opened in read mode\n");
	
		
	printf("Enter the name of your desired destination file\n");
	scanf("%s",filename);
	strcat(filename,".txt");
	if( (fp_out = fopen(filename,"w+") ) == NULL)
	{
		perror("Error in opening ");
		printf("%s.txt",filename);	
	}
	else
		printf("%s successfully opened in write mode\n",filename);
}

