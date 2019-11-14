
int main()
{
	int n;
	
	printf("Enter the number of list elements\n");
	scanf("%d",&n);

	//array declared an initialised
	int arr[n] ;

	//to initialised all the elements to zero
	memset(arr,0,n*sizeof(arr[0]));

	printf("Enter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d,",&arr[i]);
	}
	

	printf("The elements Entered are\n");
	display(arr,n);
	
	printf("before sorting array is \n");
	display(arr,n);
	
	//calling the Bsort()
	Bsort(arr,n);

	//printing array after sorting
	printf("After sorting array is \n");
	display(arr,n);
}
