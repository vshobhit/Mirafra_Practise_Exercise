#ifndef __HEADER__
	#define __HEADER__
	#include"header.h"
#endif


//FILE pointers declared global
FILE *fp_in;
FILE *fp_out;

int main()
{
		
		int *temparray;
		temparray = malloc(MAX*sizeof(int));

		//default array
		int temp1 [MAX]= {1,2,3,56,70,12,1,8,10,187};

		//default array elements are copied
		int def_array[MAX];
		for(int i=0;i<MAX;i++)
			def_array[i] = temp1[i];	

	    int ch,N,ch1;
		
		//buffer array to store the array from file
		int buffer[MAX];

		//cur_pos stores the FILE pointer before moving full length of current line for writing to file
		int cur_pos;

		//to open file pointers of both the test_code.txt i.e input file and out.txt
		file_open();				

		//Hard Coding part .Here the array initialised previously is checked by array which is sorted array of initial arrray
		int checkarray[] = {1,1,2,3,8,10,12,56,70,187};
	
	while(1)
	{
		
	    printf("before sorting elements are  \n");
	    display(temp1,MAX);


	    printf("Enter the sorting technique\n1.Bubble Sort\n2.Insertion Sort\n3.Quick Sort\n4.Selection Sort\n5.Merge Sort\n");
		printf("6. Get data from file\n");
	    printf("7.Exit\n");
		scanf("%d",&ch);
			

		printf("Your selected option is %d\n",ch);
	    switch(ch)
	    {
			//sorting by hard code
		    case 1:

				Bsort(def_array,MAX,temparray);
			
				//printing array after sorting
				printf("After sorting \n");
				display(def_array,MAX);
				
				//compare the sorted array with checked array
				compare_array(temparray,checkarray);
				printf("\n\n");	
				
				break;
		    case 2:
	            inssort(def_array,MAX,temparray);			
				display(def_array,MAX);
				compare_array(temparray,checkarray);
				printf("\n\n");	
				break;
		    case 3:
	           quick_sort(def_array,0,MAX-1,MAX,temparray);	
				display(def_array,MAX);
				compare_array(temparray,checkarray);
				printf("\n\n");	
				break;
		    case 4:
	            selsort(def_array,MAX,temparray);			
				display(def_array,MAX);
				compare_array(temparray,checkarray);
				printf("\n\n");	
				break;
		    case 5:
	     	    merge_sort(def_array,MAX,temparray);		
				display(def_array,MAX);
				compare_array(temparray,checkarray);
				printf("\n\n");	
				
				break;
			case 6:
					
				//N is initialised with 0 everytime so that after getting value from file if it's non-zero then only proceed
				N = 0;
		
				getdata_file(buffer,&N);
				if(N != 0)
				{
					printf("Before sorting array is\n ");
					display(buffer,N);
	    			printf("Enter the suboption\n1.Bubble Sort\n2.Insertion Sort\n3.Quick Sort\n4.Selection Sort\n5.Merge Sort\n");
					printf("6.Exit\n");
					scanf("%d",&ch1);
				switch(ch1)
				{
		    		case 1:

						Bsort(buffer,N,temparray);
			             
						 cur_pos = ftell(fp_out);	
						if(N != 0)
						{
							//printing array after sorting
							data_write(buffer,N);
							printf("Writing to out.txt done \n");	
							printf("After sorting array is\n");
							display(buffer,N);
							compare_file_data(buffer,N,&cur_pos);
						}
							
						break;
		    		case 2:
	            		inssort(buffer,N,temparray);			
						 cur_pos = ftell(fp_out);	
						data_write(buffer,N);	
						printf("Writing to out.txt done \n");	
						printf("After sorting array is\n");
						display(buffer,N);
						compare_file_data(buffer,N,&cur_pos);
						break;
		    		case 3:
	           			quick_sort(buffer,0,N-1,N-1,temparray);	
						 cur_pos = ftell(fp_out);	
						data_write(buffer,N);	
						printf("Writing to out.txt done \n");	
						printf("After sorting array is\n");
						display(buffer,N);
						compare_file_data(buffer,N,&cur_pos);
						break;
		    		case 4:
	          		  	selsort(buffer,N,temparray);			
						 cur_pos = ftell(fp_out);	
						data_write(buffer,N);	
						printf("Writing to out.txt done \n");	
						printf("After sorting array is\n");
						display(buffer,N);
						compare_file_data(buffer,N,&cur_pos);
						break;
		    		case 5:
	     	    		merge_sort(buffer,N,temparray);		
						 cur_pos = ftell(fp_out);	
						data_write(buffer,N);	
						printf("Writing to out.txt done \n");	
						printf("After sorting array is\n");
						display(buffer,N);
						compare_file_data(buffer,N,&cur_pos);
				
						break;
					case 6:
						break;
					default:
							printf("Enter the correct choice\n");
				}
				}
				printf("\n\n");
				break;
		    case 7:
				exit(0);
				break;
			default:
				printf("Enter the correct choice\n");
			
			
	    }

		
	}//while(1) loop ends
		fclose(fp_in);
		fclose(fp_out);
	
				

}








