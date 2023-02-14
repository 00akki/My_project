#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node* next;
};
   struct node* top=NULL; 
   void push(int x){
    struct node* new;   
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    if(top==NULL){
       new->next=NULL;
    }
       new->next=top;
         top=new;        
  }
   void pop(){
     struct node* d;
     if(top==NULL){
            printf("stack is empty");
     } else{
        d=top;
        top=top->next;
        free(d);
        d=NULL;
     }
   } 
   void display(struct node* top){
      struct node* ptr=top;
      printf("The top element is :%d\n",ptr->data);    
   }
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display(top);
    pop();
    display(top);
    return 0;
}