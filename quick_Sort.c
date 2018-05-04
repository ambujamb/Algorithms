
//...........................QUICK SORT...............................


/*

TIME COMPLEXITY:
			In Best Case : O(nlogn)

			In Worst case : O(n^2)

*/

#include<stdlib.h>
#include<stdio.h>

/*
void swap(int value1,int value2)
{
	int temp;
	
	temp=value1;
	value1=value2;
	value2=temp;
}
*/

int partition(int ar[],int p, int r)
{
	int pivot,i,j,temp1,temp;

	pivot=ar[r];
	i= p-1;

	for(j=p;j<(r-1);j++)
	{
		if(ar[j] <= pivot)
		{
			i=i+1;
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	}

	temp1=ar[i+1];
	ar[i+1]=ar[r];
	ar[r]=temp1;

	return (i+1);

}

void quickSort(int A[],int p,int r)
{
	int q;
	
	if(p<r)
	{
	  q=partition(A,p,r);
	  quickSort(A,p,q-1);
	  quickSort(A,q+1,r);
	}
}


int main()
{
	int a[10],i;
	
	printf("Enter The 10 elements \n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);

	quickSort(a,0,9);

	printf("Sorted Array \n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);

	return 0;
}

