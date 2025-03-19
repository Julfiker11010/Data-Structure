#include<stdio.h>
int main(){
    int arr[50],n,pos,value;
    printf("Enter the number of element of array: \n");
    scanf("%d",&n);

    printf("Enter elements of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter position and value: \n");
    scanf("%d%d",&pos,&value);

    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }

    arr[pos-1]=value;
    n++;

    printf("After insert: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
