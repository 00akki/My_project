#include<bits/stdc++.h>
bool ans=false;
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='/'  or s[i]=='*'){
            st.push(s[i]);
        }else if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
             if(st.top()=='('){
                ans=true;
            }
            while(st.top()=='+' or st.top()=='-' or st.top()=='/'  or st.top()=='*'){
                st.pop();
            }
        }
        st.pop();
    }
    cout<<ans<<endl;
    return 0;  //((a+b))
}