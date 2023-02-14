#include<iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"Akash"<<endl;
    }
};
class B{
    public:
    void Bfunc(){
        cout<<"shivam"<<endl;
    }
};
class C:public A,public B{
      
};

int main(){
    C akki;
    akki.Afunc();
    akki.Bfunc();
     return 0;
}