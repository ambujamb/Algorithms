
//..................BINARY SEARCH PROGRAM


/*

TIME COMPLEXITY :
	IN WORST CASE =
			T(n) = T(n/2) + c

			T(n) = O(log n)
	IN BEST CASE = 
			T(n) = O(1)
*/


#include<stdlib.h>
#include<stdio.h>

int binary_search(int arr[],int size,int search_element)
{
	int low=1,mid,high=size;

	while(low<=high)
	{
		mid = (low + high)/2;
		
		if(arr[mid]==search_element)
			return mid;
		else if(arr[mid] > search_element)
			high = mid - 1;
		else 
			low = mid + 1;	
	}
}


int main()
{
	int array[10],i,search_element,position;

	//Insert the elements	
	printf("Enter the array elements\n");
	for(i=0;i<10;i++)
	scanf("%d",&array[i]);

	//Enter the value of element to be search
	printf("Enter the element to be search ");
	scanf("%d",&search_element);
	
	position = binary_search(array,10,search_element);
	
	if(position == -1)
		printf("Not Found");
	else
		printf("Element found at position = %d",position + 1);

	return 0;
}

