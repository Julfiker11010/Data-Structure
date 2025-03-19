#include<stdio.h>
int main(){
    int a[100],search,i,n,first,last,mid;
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&search);

    first=0;
    last= n-1;

    while(first<=last){
        mid= (first+last)/2;

        if(a[mid]==search){
            printf("%d found at index %d",search,mid);
            break;
        }

        else if(a[mid]<search){
            first=mid+1;
        }

        else{
            last=mid-1;
        }
    }

    if(first>last){
        printf("%d is not found",search);
    }
}
