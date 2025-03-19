#include<stdio.h>
int main(){
    int a[50],n,pos;
    printf("Input the size of array: ");
    scanf("%d",&n);

    printf("Input array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Input position to delete: ");
    scanf("%d",&pos);

    if(pos<1 || pos>n){
        printf("Invalid position\n");
    }

    else{
        for(int i=pos-1;i<n-1;i++){
            a[i]= a[i+1];
        }
        n--;

        printf("Updated array: ");
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
}

