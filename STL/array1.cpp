#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> s={1,2,4,5};
    int size=s.size();
    for(int i=0;i<size;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    cout<<"position at 2nd index : "<<s.at(2)<<endl;
    cout<<"is array empty"<<s.empty()<<endl;
    cout<<"is array first element :"<<s.front()<<endl;
    cout<<"back element :"<<s.back()<<endl;
    return 0;
}