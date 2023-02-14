#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
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
    do
  {      
    struct node* temp;
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value :");
    scanf("%d",& new->data);
         new->next=NULL;
    if(head==NULL){
        head=temp=new;
        
        
    } else{
       //  temp=head;
        temp->next=new;
        temp=temp->next;
        }
      printf("Enter choice :");
      scanf("%d",&choice);
  }
  while(choice==1);
  print_List(head);

  //struct node* temp=head;

  return 0;
}
