#include<iostream>
using namespace std;

int sum(int x){
    if(x==0){
        return 0;
    }
    int prevsum=sum(x-1);
    return x+prevsum;
}
int main(){

    int x; cin>>x;
    cout<<sum(x)<<endl;
    return 0;
    
}