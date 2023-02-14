#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next; 
};
  
  void create(struct node* head,int value){    
    struct node* temp;    
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
//    printf("Enter the value :");
//     scanf("%d",&new->data);
        // new->next=NULL;
         if(head==NULL){
            head=new;
            return;
         }
         else{
           // new->next=head;
           struct node* ptr;
            temp->next=new;
            temp=temp->next;
         }
  }
    void display(struct node* head){
        struct node* pr=head;
        while(pr!=NULL){
            printf("%d",pr->data);            
            printf("->");
            pr=pr->next;            
            }           
         }
         
    int main(){
     struct node* head;
    create(head,5);
    create(head,6);
    create(head,9);
    create(head,8);
    display(head);
    return 0;
}