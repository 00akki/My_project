#include<iostream>
using namespace std;

void dec(int x){
    if(x==0){
        return;
    }
    cout<<x<<" ";
    dec(x-1);
}
int main(){

    int x; cin>>x;
    dec(x);
    return 0;

}