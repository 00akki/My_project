#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next =NULL;
    }
};
    void insert(node* &head,int value){
           node* n=new node(value);
           if(head==NULL){
            head=n;
            return;
           }
           node* temp=head;
           while(temp->next!=NULL){
            temp=temp->next;
           }
           temp->next=n;
    }

    void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
     
     node* reverse(node* &head){
        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;
        while(currptr!=NULL){       
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        }
        return prevptr;
     }

     node* reverse_Recursive(node* &head)
     {
        if( head==NULL || head->next==NULL){
            return head;
        }
        node* newhead=reverse_Recursive(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;

     }
 int main(){
    node* head=NULL;
    // insert(head,1);
    // insert(head,2);
    // insert(head,3);
    // insert(head,4);
    // insert(head,6);
     for(int b=1;b<=6;b++){
      insert(head,b);
     }
    display(head);
    node* newhead=reverse_Recursive(head);
    display(newhead);
    return 0;
}