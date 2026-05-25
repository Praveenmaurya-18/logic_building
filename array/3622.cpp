#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int a[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) {
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
}

int main() {
    int sizes[] = {500, 1000, 1500, 2000};
    int k = 4;

    printf("n\tTime(ms)\n");

    for(int i=0;i<k;i++) {
        int n = sizes[i];
        int a[n];

        for(int j=0;j<n;j++)
            a[j] = rand()%1000;

        clock_t s = clock();
        bubble(a,n);
        clock_t e = clock();

        double time = (double)(e-s)/CLOCKS_PER_SEC*1000;

        printf("%d\t%.2f\n", n, time);
    }

    return 0;
}

