#include<stdio.h>
#define N 5
int top=-1,stack[N];

void push(){
    if(top==N-1){
        printf("Overflow");
    }

    else{
        int item;
        printf("Enter the item: ");
        scanf("%d",&item);

        top++;
        stack[top]=item;
        printf("%d is added to the stack\n",item);
    }
}

void pop(){
    if(top==-1){
        printf("Underflow");
    }

    else{
        printf("%d is poped\n",stack[top]);
        top--;
    }
}

void displayTop(){
    if(top==-1){
        printf("Stack is empty\n");
    }

    else{
        printf("%d is the peek element\n",stack[top]);
    }
}

void displayStack(){
    if(top==-1){
        printf("Stack is empty\n");
    }

    else{
        printf("\nElements present in the stack: ");
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    int choice;

    while(1){
        printf("\nMenu: \n1.Push\n2.Pop\n3.Display Top\n4.Display Stack\n5.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        if(choice==1){
            push();
        }

        else if(choice==2){
            pop();
        }

        else if(choice==3){
            displayTop();
        }

        else if(choice==4){
            displayStack();
        }

        else if(choice==5){
            printf("Exit");
            break;
        }

        else{
            printf("Invalid Input\n");
        }
    }
}
