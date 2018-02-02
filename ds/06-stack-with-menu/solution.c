#include<stdio.h>
#define MAX 5

void push(int);
void pop();
void peek();
void display();
int isFull();
int isEmpty();

int myStack[MAX];
int top = 0;

int main(){

    int choice, value;

    printf("Stack Basic Operation\n");
    printf("=====================\n");
    printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n\n");


    while(1){

        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n");

        switch(choice){
            case 1:
                printf("Enter a value: ");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}


void push(int value){
    if(isFull()){
        printf("Stack if full.\n\n");
    }else{
        myStack[top] = value;
        top++;
        printf("%d pushed successfully at index %d \n\n", value, top-1);
    }
}

void pop(){
    if(isEmpty()){
        printf("Stack is empty.\n\n");
    }else{
        int poppedValue = myStack[--top];
        printf("%d popped successfully from index %d \n\n", poppedValue, top);
    }
}

void peek(){
    if(isEmpty()){
        printf("Stack is empty.\n\n");
    }else{
        printf("Top data element of the stack is: %d \n\n", myStack[top-1]);
    }
}

void display(){
    int i;
    if(isEmpty()){
        printf("Stack is empty.\n\n");
    }else{
        for(i = top - 1; i >= 0; i--){
            printf("myStack[%d] = %d\n",i,myStack[i]);
        }
        printf("\n");
    }
}

int isFull()
{
    if(top == MAX){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty()
{
    if(top == 0){
        return 1;
    }else{
        return 0;
    }
}
