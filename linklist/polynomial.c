#include<stdio.h>
#include<stdlib.h>
 struct node* create(struct node *head);
 struct node* insert(struct node *head,int co,int ex);
    struct node{
     int ex;
     int co;
     struct node* next;
    };

  struct node* create(struct node* head){
     int i,n,exe;
     int cof;
   // struct node* next;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       // printf("Enter the coefficient :");
        scanf("%d",&cof);
        // printf("Enter the exponential :");
        scanf("%d",&exe);
         head=insert(head,cof,exe);       
    }
    return head;
}    
        struct node* insert(struct node* head,int cof,int exe){
             struct node* temp;
             struct node* new;
             new=(struct node*)malloc(sizeof(struct node));
             new->co=cof;
             new->ex=exe;
             new->next=NULL;       
             if(head==NULL || exe>head->ex){
                new->next=head;
                head=new;                          
              }  else{
               temp=head;
                while(temp->next!=NULL && temp->next->ex>exe){
                temp=temp->next;
                }
                temp->next=new;
               return head;
            }     
   }
   void display(struct node* head){
        struct node* ptr=head;
        while(ptr!=NULL){
        printf("%dx",ptr->co);
        printf("%d ",ptr->ex);
        ptr=ptr->next;
      }
   }
int main(){
    struct node* head=NULL;
    printf("Enter the no of polynomial:\n");
    head=create(head);
    display(head);
    return 0;
}
