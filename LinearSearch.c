#include<stdio.h>
int main(){
    int a[100],search,i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&search);

    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("%d found at index %d",search,i);
            break;
        }
    }

    if(i==n){
        printf("%d is not found",search);
    }
}
