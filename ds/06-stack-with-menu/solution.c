#include<stdio.h>
#define MAX 5

void push(int value);
void pop();
void peek();
void display();

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
    if(top == MAX){
        printf("Stack if full\n");
    }else{
        myStack[top] = value;
        top++;
    }
}

void pop(){

}

void peek(){

}

void display(){
    int i;
    if(top == 0){
        printf("Stack is empty.\n");
    }
    else{
        for(i = top - 1; i >= 0; i--){
            printf("myStack[%d] = %d\n",i,myStack[i]);
        }
    }
}
