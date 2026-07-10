#include <stdio.h>

int main()
{
	int i, n, arr[1221], key, mid, big, end, found = 0;

	printf("enter the number of element in array:\n");
	scanf("%d", &n);

	printf("enter the elements of sorted array:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\nthe array is :\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\nenter the element for searching:\n");
	scanf("%d", &key);
	big = 0;
	end = n - 1;
	while (big <= end)
	{
		mid = (big + end) / 2;

		if (key == arr[mid])
		{
			printf("the value is find at index %d", mid);
			found = 1;
			break;
		}
		else if (key > arr[mid])
		{
			big = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	if (found == 0)
	{
		printf("the element is not found in the given array");
	}

	return 0;
}
