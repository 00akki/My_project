#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> p;
    p.push_front(5);
    p.push_front(6);
    p.push_back(1);
    p.push_back(2);
    for(auto i:p){
      cout<<i<<" ";     
    }cout<<endl;
    p.pop_back();
    p.pop_front();
    for(auto i:p){
      cout<<i<<" ";
    }
    cout<<endl; 
   cout<<p.size()<<endl;
    return 0;
}