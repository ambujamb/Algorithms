
//........................FIND A MISSING NUMBER USING XOR.....................

/*

TIME COMPLEXITY: O(n)

*/
	

#include<stdio.h>
#include<stdlib.h>

int get_missing_number(int array[], int size)
{
	int x1,x2,i;

	x1=array[0];
	x2=1;

	//for xor of all elements in array	
	for(i=1;i<size;i++)
	x1 = x1^array[i];						

	//for xor of all elements ranging from 1 to size+1
	for(i=2;i<=size+1;i++)
	x2 = x2^i;

	return (x1^x2);
}

int main()
{
	int a[]={1,2,3,4,6};
	int missing_number = get_missing_number(a,5);
	printf("Number Missing In array = %d",missing_number);
	return 0;
}
