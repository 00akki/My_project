#include<iostream>
using namespace std;
int main(){
    int x; cin>>x;
    int ar[x];
    for(int a=0;a<x;a++){
        cin>>ar[a];
    }
       int sum=0;
       for(int a=0;a<x;a++){
           for(int b=a;b<x;b++){
            sum+=ar[b];
             cout<<sum<<endl;


           }
       }
        cout<<endl;

    return 0;
}