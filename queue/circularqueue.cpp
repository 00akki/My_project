#include<iostream>
using namespace std;
# define n 5
int arr[n];
int f =-1;
int r=-1;
 
  void enqueue(int x){
    if((r==n-1 && f==0) || (r==f+1)){
        cout<<"queue is full"<<endl;
        return;
    }else if(r==n-1 && f!=0){
      r=r%n;
      arr[r] = x;
    }else if(f==-1){  //first element
       f=r=0;
      arr[r]=x;
    }else{
        r++;
        arr[r]=x;
    }
  } 
   void display(){
    if(f==-1){
      cout<<"queue is empty"<<endl;
      return ;
    }else if(r>=f){
      for(int i=f;i<r;i++) cout<<arr[i]<<" ";     
    }else{
       for(int i=0;i<r;i++) cout<<arr[i]<<" ";  
    }
   } 
int main(){
  // cout<<n<<endl;
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(6);
  enqueue(7);
  display();
    return 0;
}