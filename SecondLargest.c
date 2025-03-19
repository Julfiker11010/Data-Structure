#include<stdio.h>
int main(){
    int a[100],max,n,max2;
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    max=a[0];
    max2= a[0];

    for(int i=1;i<n;i++){
        if(max<a[i]){
            max= a[i];
        }
    }

    for(int i=1;i<n;i++){
        if(a[i]>max2 && a[i]<max){
            max2= a[i];
        }
    }
    printf("Largest: %d\n",max);
    printf("Second largest: %d",max2);

}
