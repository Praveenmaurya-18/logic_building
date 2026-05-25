#include <stdio.h>

// RECURSIVE BINNARY SEARCHING
// TIME COMPLEXITY: LOG(n)   AND SPACE COMPLEXITY LOG(n)
int binnarysearch(int arr[], int low, int high, int x)
{

	if (high >= low)
	{
		int mid = (high + low) / 2;
		if (arr[mid] == x)
		{
			return mid;
		}
		if (arr[mid] > x)
		{
			return binnarysearch(arr, low, mid - 1, x);
		}
		return binnarysearch(arr, mid + 1, high, x);
	}
	return -1;
}
int main()
{
	// int arr[] = {2,3,5,6,8,9};
	// int x= 8;
	// int n = sizeof(arr)/sizeof(arr[0]);
	int i, n, x, arr[100];
	printf("enter the number of elements:\n");
	scanf("%d", &n);

	printf("\nenter %d elements", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nthe array is:");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n enter the element for searching:");
	scanf("%d", &x);

	int result = binnarysearch(arr, 0, n - 1, x);
	if (result == -1)
	{
		printf("\nthe given element  is not present in array");
	}
	else
	{
		printf("\nthe element is present at index %d", result);
	}
	printf("\nthe time complexity of recurrsive binnary search is O(log(n)) and space complexity is also O(log(n))");

	return 0;
}
