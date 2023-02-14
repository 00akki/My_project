#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

 int pre_Evalution(string s){
    stack<int> y;
  //  int op1,op2;
    for(int a=s.length()-1;a>=0;a--){
        if(s[a]>='0' && s[a]<='9'){
            y.push(s[a]-'0');
        }
        else{
           int  op1=y.top();
             y.pop();
           int  op2=y.top();
             y.pop();
           
    switch (s[a])
    {
    case '+':
     y.push(op1+op2);
        break;
        case '-':
     y.push(op1-op2);
        break;
        case '*':
     y.push(op1*op2);
        break;
        case '/':
     y.push(op1/op2);
        break;
        case '^':
     y.push(pow(op1,op2));
        break;   
    default:
        break;
    }
  }
 }
    return y.top();
 }

int main(){
    cout<<pre_Evalution("-+7*45+20")<<endl;
    return 0;
}
//-+7*45+20
