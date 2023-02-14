#include<iostream>
using namespace std;
# define n 5
  int f=-1,r=-1;
  int queue[n];

  void enqueue(int x){
    if(r==n-1){
        cout<<"queue is full"<<endl;
        return ;
    }
    else if(f=-1){
        f++; r++;
     queue[r]=x;
    }else{
            r++;
     queue[r]=x;
    }
  }  

   void top_1(){
    if(f==-1){
      cout<<"queue is empty"<<endl;
    }else {
      cout<<queue[f]<<endl;;
      }
   }
    
     void pop(){
      if(f==-1){
      cout<<"queue is empty"<<endl;
       }else{
         f++;
       }

     }
  int main(){ 
       enqueue(1);
       enqueue(2);
       enqueue(3);
       enqueue(4);
       top_1();
       pop();
       top_1();
   return 0;
  }

