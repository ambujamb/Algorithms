	

	//..............LINEAR SEARCH PROGRAM...........

/*

TIME COMPLEXITY = O(n)   IN WORST CASE

TIME COMPLEXITY = O(1)   IN BEST CASE

*/



#include<stdlib.h>
#include<stdio.h>

int linear_search(int arr[],int size,int search_element)
{
	int k;
	for(k=0;k<size;k++)
	{
		if(arr[k]==search_element)
		return k;
	}
	return -1;

}

int main()
{
	int array[10],i,search_element,position;

	//Insert Array Elements
	printf("Enter the Elements \n");		
	for(i=0;i<10;i++)
	scanf("%d",&array[i]);	
			
	//Input value of element to be search
	printf("Enter the element to be search ");
	scanf("%d",&search_element);

	//Function Calling
	position = linear_search(array,10,search_element);

	//Print the position
	if(position == -1)
	printf("Not found");
	else
	printf("Element found at position = %d",position+1);

	return 0;
}






