#include<iostream>
#include<cmath>
using namespace std;
class poly{
  public:
  int co;
  int ex;
  poly* next;

     poly(int value,int expo){
      co=value;
       ex=expo;
        next=NULL;
  }
};
      void create(poly* &head,int value,int expo){
            poly* n=new poly(value,expo);
            if(head==NULL){
                head=n;
                return;
            }
             else{
                poly* temp=head;
                while(temp->next!=NULL)  {     
                temp=temp->next;
                }
                  temp->next=n;
             }
      }
      void display(poly* head){
      poly* temp=head;
      while(temp!=NULL){
        cout<<temp->co<<"x"<<temp->ex<<" ";
        temp=temp->next;
         }
         cout<<endl;
      }
      

   int main(){
    poly* head=NULL;
    create(head,5,2);
    create(head,6,1);
    create(head,7,0);
    display(head);
    return 0;
}