#include<iostream>
using namespace std;
int main(){
    int x,y; 
    char op;
    cout<<"Enter first number :";
    cin>>x;
    cout<<"Enter operator :";
    cin>>op;
    cout<<"Enter second number :";
    cin>>y;
    if(op== '+'){
        cout<<"The sum of x and y is: "<<x+y<<endl;
    }
    else if(op== '-'){
        cout<<"The subtraction of x and y is: "<<x-y<<endl;
    }
    else if(op== '*'){
        cout<<"The multiply of x and y is: "<<x*y<<endl;
    }
    else if(op=='/'){
        cout<<"The devide of x and y is: "<<x/y<<endl;
    }
    else
     if(op=='%'){
        cout<<"The modulus of x and y is: "<<x%y<<endl;
    }
    cout<<endl;
    return 0;
}