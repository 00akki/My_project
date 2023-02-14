#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prevtr;
};  
      void print_List(struct node* head){
        struct node* p=head;
           while(p!=NULL){
           printf("%d",p->data);
           printf("->");
           p=p->next;
       }
       printf("NULL");
   }
  
   struct node* head;

int main(){
    int choice;
    do{
    struct node* new;
    struct node* temp;
   // struct node* pemp;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value :");
    scanf("%d",&new->data);
    new->next=NULL;
    
    
    if(head==NULL){
        head=temp=new;     
    }
    else{
        //temp=head;
        temp->next=new;
        new->prevtr=temp;
        temp=temp->next;
        
    }
    printf("Enter choice :");
    scanf("%d",&choice);
    }
    while(choice==1);
    print_List(head);
    return 0;
}