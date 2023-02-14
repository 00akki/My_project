#include<iostream>
using namespace std;

class node{
    public:
   int data;
   node* next;
   node(int  value){
    data=value;
    next=NULL;
   }
};
void insert_At_Head(node* &head,int value){
    node* n=new node(value);
    n->next=head;
    head=n;
}
void insert_At_Tail(node* &head,int value){
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
void dis_Play(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search_A(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
   return false;
}

          void delete_At_Head(node* &head){
            node* todelete=head;
            head=head->next;
            delete todelete;
          }
 
 void deletion(node* &head, int value){
    node* temp=head;
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
 }
int main(){
    node* head=NULL;
    for(int a=1;a<=9;a++){
    insert_At_Tail(head,a);
    }
    dis_Play(head);
    insert_At_Head(head,10);
    dis_Play(head);
//      int key; 
//      cout<<"Enter key : "<<endl;
//      cin>>key;
//    int k= search_A(head,key);
//    cout<<k<<endl;
   deletion(head,4);
    dis_Play(head);
    delete_At_Head(head);
        dis_Play(head);

    return 0;
}