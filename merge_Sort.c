
//...........................MERGE SORT......................

/*

TIME COMPLEXITY:

		Of merge Function : O(n)
		
		Of merge_Sort Function : O(nlogn)
*/


#include<stdlib.h>
#include<stdio.h>


void merge(int ar[],int p,int q,int r)
{
	int n1,n2,i,j,k;
	n1=q-p+1;
	n2=r-q;

	int left[n1],right[n2];

	//Copying half elements into subarray named left[]
	for(i=0;i<n1;i++)
	left[i] = ar[p+i];

	//Copyng another half elements into another subarray named right[]
	for(j=0;j<n2;j++)
	right[j] = ar[q+j+1];

	i=0;
	j=0;
	k=p;

	//Merging elements by comparing elements
	while(i<n1 && j<n2)
	{
		if(left[i] <=right[j])
		{
			ar[k]=left[i];
			i++;
		}
		else
		{
			ar[k] =right[j];		
			j++;
		}
		k++;
	}

	//Coping the remaining elements of left subarray into array
	while(i<n1)
	{
	 ar[k] = left[i];
	 k++;
	 i++;
	}

	//Coping the remaining elements of right subarray into array
	while(j<n2)
	{
	 ar[k] = right[j];
	 k++;
	 j++;
	}

}



void merge_Sort(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_Sort(A,p,q);
		merge_Sort(A,q+1,r);
		merge(A,p,q,r);
	}
	
}

int main()
{

	int a[10],i,j,k;
	
	printf("Enter the 10 Elements in Array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	merge_Sort(a,0,9);

	printf("Sorted List\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

	return 0;	
}




























