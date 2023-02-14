#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"front element :"<<d.at(0)<<endl;
    cout<<"front element :"<<d.front()<<endl;
    cout<<"is deque is element :"<<d.empty()<<endl;
    cout<<"is deque is size :"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+2);
    for(int a:d){
        cout<<a<<" ";
    }

    return 0;
}