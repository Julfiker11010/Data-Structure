#include<stdio.h>
#define n 5
int front=-1,rear=-1;
int queue[n];

void enqueue(){
    int item;
    printf("Enter the item: ");
    scanf("%d",&item);

    if(rear==n-1){
        printf("Overflow");
    }

    else{
        rear++;
        queue[rear]=item;
        printf("Enqueued: %d\n",item);

        if(rear==0){
            front=0;
        }
    }
}

void dequeue(){

    if(front==-1 && rear==-1){
        printf("Underflow");
    }

    else{
        printf("Dequeued: %d\n",queue[front]);
        front++;
    }
}

void displayFront(){
    if(front==-1 && rear==-1){
        printf("Underflow\n");
        return;
    }

    else{
        printf("%d is front element\n",queue[front]);
    }
}

void displayRear(){
    if(front==-1 && rear==-1){
        printf("Underflow\n");
        return;
    }

    else{
        printf("%d is rear element\n",queue[rear]);
    }
}

void displayQueue(){
    if(front==-1 && rear==-1 || front==(rear+1)){
        printf("Underflow\n");
        return;
    }

    else{
        printf("Queue elements: ");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    int choice;
    while(1){
        printf("\nMenu: \n1.Enqueue\n2.Dequeue\n3.Display front\n4.Display rear\n5.Display queue\n6.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        if(choice==1){
            enqueue();
        }

        else if(choice==2){
            dequeue();
        }

        else if(choice==3){
            displayFront();
        }

        else if(choice==4){
            displayRear();
        }

        else if(choice==5){
            displayQueue();
        }

        else if(choice==6){
            printf("Exit");
            break;
        }

        else{
            printf("Invalid Input\n");
        }
    }
}
