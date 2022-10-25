#include<stdio.h>





void sort(int arr[],int size)
{

	int temp;
	for(int i=0;i<size-1;i++)
	{
		//printf("%d ",arr[i]);

		for(int j=i+1;j<size;j++)
		{

			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;		
			}
			
		}
		
	}


}


int main()
{




	int arr[6] = {7,3,5,4,2,8};


	printf("before sorting\n");

	for(int i =0 ;i<6;i++)
		printf("%d ",arr[i]);
	printf("\n");
	sort(arr,6);

	printf("after sorting\n");

	for(int i =0 ;i<6;i++)
		printf("%d ",arr[i]);

	return 0;
}

