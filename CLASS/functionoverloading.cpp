#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"The function with no argument"<<endl;
    }
    void func(int c){
         cout<<"The function with int argument"<<endl;

    }
    void func(double c){
         cout<<"The function with double type argument"<<endl;
    }
};
int main(){
    A object;
    object.func();
      object.func(4);
        object.func(6.9);

    return 0;
}