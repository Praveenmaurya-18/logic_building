#include<stdio.h>
int main(){
int i,n,j,temp,arr[100];
printf("enter the number of elements: ");
scanf("%d",&n);
printf("\nenter %d elements:",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("\nunsorted array: ");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}


printf("\nsorted array: ");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}