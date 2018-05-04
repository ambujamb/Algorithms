

//........................INSERTION SORT......................

/*

TIME COMPLEXITY:

In Best Case :  O(n)		n for linearly traversing the elements

In Worst Case : O(n^2)		FIRST 'n' for traversing element and SECOND 'n' for shifting rest of elements after placing element at correct position

*/


#include<stdlib.h>
#include<stdio.h>

void insertion_Sort(int ar[], int size)
{
	int j,w,key;
	
	for(j=1;j<size;j++)
	{
		key = ar[j];
		w=j-1;
		while(w>=0 && ar[w]>key)
		{
			ar[w+1] = ar[w];
			w=w-1;
		}
	ar[w+1] = key;	
	}

}

int main()
{
	int a[10],i;
	
	printf("Enter The 10 Elements \n");
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);


	insertion_Sort(a,10);

	printf("SORTED ARRAY \n");
	for(i=0;i<10;i++)
		printf("%d ", a[i]);

	return 0;
}




