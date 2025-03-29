#include<stdio.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head,*node,*temp;
int main(){
    int n,i;
    printf("Enter the number of data: ");
    scanf("%d",&n);
    head=0;

    for(i=1;i<=n;i++){
        node=(struct Node *)malloc(sizeof(struct Node));
        if(node==0){
            printf("Cannot allocate");
        }

        else{
            int item;
            printf("\nEnter your data %d: ",i);
            scanf("%d",&item);

            node->data=item;
            node->next=NULL;

            if(head==NULL){
                head=node;
            }

            else{
                temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }

                temp->next=node;
            }
        }
    }

    temp=head;
    while(temp!=NULL){
        printf("%d------->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
