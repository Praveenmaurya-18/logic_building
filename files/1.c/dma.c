#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("enter the number of elements:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
  
        for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array \n", i);

        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d of this array is %d\n", i, ptr[i]);
    }
    printf("enter the number of new array elements:");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array \n", i);

        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d of new array is %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}
