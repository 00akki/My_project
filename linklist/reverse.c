#include<stdio.h>
#include<stdlib.h>
     
     struct node{
       int data;
       struct node* next;    
     };
        
        struct node* revrese(struct node* head){
            struct node* prevptr=NULL;
            struct node* currptr=head;
            struct node* nextptr;
            while(currptr!=NULL){
                nextptr=currptr->next;
                currptr->next=prevptr;
                prevptr=currptr;
                currptr=nextptr;
            }
            head=prevptr;
            return head;            
        }
       void display(struct node* head){
        struct node* ptr=head;
        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
           ptr=ptr->next;
        }printf("NULL");
       }
     struct node* head;
 int main(){
    int choice;
    do{
        struct node* new;
        struct node* temp;
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter value :");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL){
            head=temp=new;
        }
        else{
            //temp=head;
            temp->next=new;
            temp=temp->next;
        }
        printf("Enter choice :");
        scanf("%d",&choice);
    }
    while(choice==1);
    struct node* nep=(struct node*)malloc(sizeof(struct node));
      nep=reverse(head);
    display(nep);
    return 0;
}