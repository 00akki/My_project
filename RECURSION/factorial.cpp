#include<iostream>
using namespace std;

int factorial(int c){

    if(c==0){
        return 1;
    }

    int prevfa=factorial(c-1);
    return c*prevfa;

}

int main(){
    int c; cin>>c;
    cout<< factorial(c)<<endl;
}