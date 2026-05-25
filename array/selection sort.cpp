#include <stdio.h>
int main()
{

	int i, j, arr[100], n, minindex, temp;

	printf("enter the number of element:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("unsorted array is:\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		minindex = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minindex])
			{
				minindex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minindex];
		arr[minindex] = temp;
	}
	printf("\nsorted array by selection sort is:\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n !!THANKS!!");
	return 0;
}
