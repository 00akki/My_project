#include<stdio.h>
#define n 5
  int top=-1;
  int stack[n];

  void push(int x){
    if(top==n-1){
        printf("stack is overflow\n");
    }
    else{
    top++;
    stack[top]=x;
    }
  } 
  void pop(){
    if(top==-1){
        printf("stack is empty");
    }
      else top--;
  }  void display(){
    printf("%d\n",stack[top]);
  }

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    pop();
    display();
 return 0;
}