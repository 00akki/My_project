#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
        next=NULL;
        data=value;
    }
};
    void insertAtTail(node* &head,int value){
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
            cout<<temp->data<<"-> ";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;
    }

    node* reverse(node* &head){
        node* prevptr=NULL;
        node* currptr=head;
        node* newptr;
        while(currptr!=NULL){
            newptr=currptr->next;
            currptr->next=prevptr;

            prevptr=currptr;
            currptr=newptr;
        
        }
        return prevptr;

    }
   /*void deletion(node* &head,int vale){  //delete 
        node* temp=head;
        while(temp->next->data!=vale){
            temp=temp->next;
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }*/

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
   // deletion(head,3);
    //display(head);
    node* rever=reverse(head);
    display(rever);

 return 0;
}