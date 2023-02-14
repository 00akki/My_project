#include<stdio.h>
#include<stdlib.h>
struct poly* create(struct poly* head);
struct poly* insert(struct poly* head,int coff,int exe);
struct poly* add(struct poly* head1,struct poly* head2);
 struct poly{
   int co,ex;
   struct poly* next;
 };   
 struct poly* create(struct poly* head){
    int coff,exe,i,n;
    printf("Enter the no of trems :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&coff);
    scanf("%d",&exe);
     head=insert(head,coff,exe);
    }
    return head;
 }
    struct poly* insert(struct poly* head,int coff,int exe){
        struct poly* temp;
        struct poly* new;
        new=(struct poly*)malloc(sizeof(struct poly));
        new->co=coff;
        new->ex=exe;
        new->next=NULL;
        if(head==NULL || exe>head->ex){
            new->next=head;
            head=new;
        } else{
            temp=head;
            while(temp->next!=NULL && temp->next->ex>exe){
                temp=temp->next;
            }
            temp->next=new;
        } return head;   
    }   
    struct poly* add(struct poly* head1,struct poly* head2){
        struct poly* p1=head1;
        struct poly* p2=head2;
        struct poly* head3=NULL;
     while(p1!=NULL & p2!=NULL){
        if(p1->ex>p2->ex){
            head3=insert(head3,p1->co,p1->ex);
            p1=p1->next;
        } else if(p2->ex>p1->ex){
            head3=insert(head3,p2->co,p1->ex);
              p2=p2->next;
        } else if(p1->ex==p2->ex){
             head3=insert(head3,(p1->co+p2->co),p1->ex);
             p1=p1->next;
            p2=p2->next;
        }
     }
        while(p1!=NULL){
             head3=insert(head3,p1->co,p1->ex);
            p1=p1->next;
        }
           while(p2!=NULL){
             head3=insert(head3,p2->co,p2->ex);
            p2=p2->next;
        }
        return head3;
    }
       void display(struct poly* head4){
        struct poly* temp=head4;
        while(temp!=NULL){
            printf("%dx",temp->co);
            printf("%d ",temp->ex);
            temp=temp->next;
          }
       }
int main(){
    struct poly* head=NULL;
    struct poly* head1=NULL;
    struct poly* head2=NULL;
    struct poly* head4=NULL;
     head1=create(head);
     printf("2nd polynomial\n");
     head=NULL;
     head2=create(head);
     head4=add(head1,head2);
       display(head4);
    return 0;
}