#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
class queue{  
    node* front;
    node* back;
     public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(front=NULL){
             back=n;
             front=n;
             return;          
        }
        back->next=n;
        back=n;
    }
    void pop(){
      if(front=NULL){
        cout<<"queue is underflow"<<endl;
        return;
      }
     node* todelete=front;
     front=front->next;
     delete todelete;
    }
     int peek(){
        if(front=NULL){
        cout<<"queue is underflow"<<endl;
        return -1;
      }
      return front->data;
     }
     bool empty(){
        if(front=NULL){
        return true;
       }
      return false;
     }
};
int main(){
    queue p;
    p.push(5);
    p.push(10);
    p.push(20);
    p.push(30);
    cout<<p.peek()<<endl;
    p.pop();
    cout<<p.peek()<<endl;
    p.empty();
    return 0;
}