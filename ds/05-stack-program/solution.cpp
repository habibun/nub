#include<iostream>
using namespace std;

void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();

int myStack[5];
int top = 0;

int main()
{
    int i;
    cout<<"initial array: "<<endl;
    for (i = 0; i < 5; i++) {
        cout<<"myStack["<<i<<"] = "<<myStack[i]<<endl;
    }
    cout<<"--------------------------------------"<<endl;

    //push operation
    push(10);
    push(20);
    push(30);
    push(30);
    push(30);

    cout<<"array after push operation: "<<endl;
    for(i = 0; i < 5; i++){
        cout<<"myStack["<<i<<"] = "<<myStack[i]<<endl;
    }
    cout<<"--------------------------------------"<<endl;

    //pop operation
    cout<<pop()<<endl;
    cout<<pop()<<endl;

    cout<<"array after pop operation: "<<endl;
    for(i = 0; i < 5; i++){
        cout<<"myStack["<<i<<"] = "<<myStack[i]<<endl;
    }
    cout<<"--------------------------------------"<<endl;

    push(30);
    push(30);
    //peek operation
    cout<<peek()<<endl;

    cout<<"array after pop operation: "<<endl;
    for(i = 0; i < 5; i++){
        cout<<"myStack["<<i<<"] = "<<myStack[i]<<endl;
    }
    cout<<"--------------------------------------"<<endl;

    //check stack is empty
    cout<<isEmpty()<<endl;
    cout<<"--------------------------------------"<<endl;

    //check stack is full
    cout<<isFull()<<endl;
    cout<<"--------------------------------------"<<endl;

    cout<<top;

    return 0;
}

void push(int item)
{
    myStack[top] = item;
    top++;
    cout<<"Push Successfull"<<endl;
}

int pop()
{
    return myStack[--top];
}

int peek()
{
    return myStack[top-1];
}

int isEmpty()
{
    if(top == 0){
        return 1;
    }else{
        return 0;
    }
}

int isFull()
{
    if(top == 5){
        return 1;
    }else{
        return 0;
    }
}

