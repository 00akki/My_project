#include<iostream>
using namespace std;

int rec_Linear(int a[],int key,int n){
    if(n<0){
        return -1;
    }
    if(a[n]==key){
        return n;
    } 
      n--;
      rec_Linear(a,key,n);
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int b=0;b<n;b++){
        cin>>a[b];
    }
    int key; 
    cin>>key;
    cout<<rec_Linear(a,key,n)<<endl;;
    return 0;
}