
//..................SELECTION SORT....................

/*

TIME COMPLEXITY : O(n^2)

SPACE COMPLEXITY : O(1)

*/


#include<stdlib.h>
#include<stdio.h>


void selection_Sort(int arr[], int size)
{
	int i,min_value,j,min_index,temp;

	
	for(i=0;i<size;i++)
	{
		min_value = arr[i];
		min_index = i;
			for(j=i+1;j<size;j++)
			{
				if(min_value > arr[j])
				{
				  min_value = arr[j];
				  min_index = j;
				}
			}

		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}


int main()
{
	int array[]={70,20,60,40,50};
	int i;
	int size= sizeof(array)/sizeof(array[0]);
	selection_Sort(array, size);
	printf("Sorted Array \n");
	for(i=0; i<size;i++)
		printf("%d ", array[i]);
	return 0;
}


