#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node* next;
};
//  void insert_At_Begin(struct node* &head){
      
// }
int main(){
     struct node* new;
     struct node* head=NULL;
     new= (struct node*)malloc(sizeof(struct node));
     int n;
     scanf("%d",&n);
     insert_At_Begin(head);

   return 0;
}