#include<stdio.h>
int main(){
    int a[100],n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        int min=i;

        for(int j=min+1;j<n;j++){
            if(a[min]>a[j]){
                min= j;
            }
        }

        temp= a[i];
        a[i]= a[min];
        a[min]= temp;
    }

    printf("After sorting: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
