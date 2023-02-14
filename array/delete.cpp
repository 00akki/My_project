#include<iostream>
using namespace std;
          
          int find(int A[],int key,int n){
            for(int a=0;a<n;a++){
                if(A[a]==key){
                    return a;
                }
            }
            return -1;
          }
 int main(){
    int n;

    cout<<"Enter the size of array :"<<endl;
    cin>>n;
        int A[n];
    for(int a=0;a<n;a++){
        cin>>A[a];
    }         
       int key;
       cin>>key;
       // int idx=find(A,key,n);
        for(int b=0;b<n;b++){
            if(A[b]==key){
               while(b<n){
                A[b+1]=A[b];
                }
            }
        }
        for(int b=0;b<n;b++){
            cout<<A[b]<<" ";
        }
        cout<<endl;
        return 0;
}
