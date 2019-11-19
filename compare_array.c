#include"header.h"


//compare function compares array element by element and if all elements 
//of the temporary array matches with checkarray that means sorting functions are running correctly
void compare_array(int *temparray,int *checkarray)
{
	int cnt = 0;
	
	int check_array[] = {-34,-23,0,2,12,12,45,45,67,89};
	//displaying the sorted array defined previously
	printf("The checked array is \n");
	display(checkarray,MAX);
	

	
	//checking that array elements are equal or not
	for(int i=0;i<MAX;i++)
	{
		if(checkarray[i] == temparray[i])
			cnt++;
	}
	if(cnt == 10)
		printf("YES\n\n");
	else
		printf("NO\n\n");
}
