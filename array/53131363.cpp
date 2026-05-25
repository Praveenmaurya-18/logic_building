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

void selection(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min]) min=j;
        int t=a[i]; a[i]=a[min]; a[min]=t;
    }
}

void insertion(int a[], int n) {
    for(int i=1;i<n;i++) {
        int key=a[i], j=i-1;
        while(j>=0 && a[j]>key) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void copy(int a[], int b[], int n){
    for(int i=0;i<n;i++) b[i]=a[i];
}

int main() {
    int sizes[] = {500, 1000, 1500, 2000};  // different n values
    int k = 4;

    printf("n\tBubble(ms)\tSelection(ms)\tInsertion(ms)\n");

    srand(time(0));

    for(int x=0; x<k; x++) {
        int n = sizes[x];
        int a[n], b[n];

        for(int i=0;i<n;i++) a[i]=rand()%1000;

        clock_t s,e;

        copy(a,b,n);
        s=clock();
        bubble(b,n);
        e=clock();
        double t1=(double)(e-s)/CLOCKS_PER_SEC*1000;

        copy(a,b,n);
        s=clock();
        selection(b,n);
        e=clock();
        double t2=(double)(e-s)/CLOCKS_PER_SEC*1000;

        copy(a,b,n);
        s=clock();
        insertion(b,n);
        e=clock();
        double t3=(double)(e-s)/CLOCKS_PER_SEC*1000;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", n, t1, t2, t3);
    }

    return 0;
}



