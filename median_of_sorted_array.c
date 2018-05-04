
//.......................MEDIAN OF TWO SORTED ARRAY USING BINARY SEARCH......................



/* 

TIME COMPLEXITY :  O(log n)

*/


#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int median(int [], int);
int evaluate_Median(int [], int [], int);


int main()
{
	int array1[] = {10,15,20,25,40};
	int array2[] = {11,17,23,30,39};
	int n1,n2,median;
	
	n1 = sizeof(array1)/sizeof(array1[0]);
	n2 = sizeof(array2)/sizeof(array2[0]);

	if(n1==n2)
	{
		median = evaluate_Median(array1, array2, n1);
		printf("Median Of An Array = %d", median);
	}

	return 0;
}


// function for evaluating median of single array
int median(int arr[], int size)
{
	int result;

	if(size%2 == 0)
		result = arr[size/2] + arr[size/2 - 1]/2;
	else
		result = arr[size/2];

	return result;

}


// Function for evaluating Median Of Two array By Comparing MEDIANS

int evaluate_Median(int a1[],int a2[], int size)
{
	int m1,m2,ans;

	if(size <= 0)
		return -1;
	if(size == 1)
		return ((a1[0] + a2[0])/2);
	if(size == 2)
	{
		ans = ((max(a1[0]),a2[0]) + min(a1[1],a2[1]))/2);
		return ans;
	}

	// Calculating median of two arrays	
	m1 = median(a1, size);
	m2 = median(a2, size);

	// If both medians are same
	if(m1 == m2)
		return m1;

	// If median of first array is less than second array
	if(m1 < m2)
	{
		if(size%2 == 0)
			return evaluate_Median(a1 + size/2 -1, a2, size-(size/2)+1);
		else
			return evaluate_Median(a1 + size/2, a2, size - size/2);
	}


	//If median of first array is grater than second array
	if(m1 > m2)
	{
		if(size%2 == 0)
			return evaluate_Median(a2 + size/2 -1, a1, size-(size/2)+1);
		else
			return evaluate_Median(a2 + size/2, a1, size - size/2);
	}
}

























