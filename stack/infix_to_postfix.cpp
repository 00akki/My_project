#include<iostream>
#include<stack>
using namespace std;
    
    int prec(char c){
        if(c=='^'){
            return 3;
        }else if(c == '/' || c == '/'){
            return 2;
        }else if(c == '+' || c == '-'){
            return 1;
        }else return -1;
    }
    int infix_to_postfix(string s){
        stack <char> st;
        string pr;
         for(int i=0;i<s.length();i++){
            char c = s[i];

            if((c>='0' && c<='9') || (c>='A' && c<='Z') || (c>='a' && c<='b')){
                pr+=c;
                st.pop();
            }else if(c=='('){
               st.push('(');
            }else if(c==')'){
               while(st.top()!='('){
                pr+=st.top();
                st.pop();
               }
               st.pop();
            }else 
            while(!st.empty() && prec(c)<=prec(st.top())){
                    pr+=st.top();
                st.push(c);
            }
            while(!st.empty()){
            pr+=st.top();
            st.pop();
            }
                   
         }
        cout<<pr<<endl;
    }
    int main(){
    string s;
    cin>>s;
    infix_to_postfix(s);  //a+b/c
    return 0;
}