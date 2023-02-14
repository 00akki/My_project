#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
 int post_Eval(string s){
    stack<int> st;
    //  gets(s);
    for(int a=0;a<s.length();a++){
       if(s[a]>='0' && s[a]<='100'){
            st.push(s[a]-'0'); // to conert string to number
             }else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch (s[a])
            {
            case '+':
            st.push(op1+op2);
                break;
                case '-':
            st.push(op1-op2);
                break;
                case '*':
            st.push(op1*op2);
                break;
                case '/':
            st.push(op1/op2);
                break;
                case '^':
            st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
 }
int main(){
   
    cout<<post_Eval("100 40 8 / 20 10 - + *")<<endl;
    return 0;
}
////46+2/5*7+