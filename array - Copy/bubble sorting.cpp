#include <stdio.h>
int main()
{

	int i, j, temp, n, arr[100];
	printf("enter the number of elements in array:");
	scanf("%d", &n);

	printf("enter the %d element:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("the unsorted array is:\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\nthe sorted array is:\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}

	printf("\n!!THANK YOU!!");
	return 0;
}
