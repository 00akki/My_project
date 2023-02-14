#include<bits/stdc++.h>
using namespace std;
  
  vector<int> span_Stock(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> st;
    for(auto price:prices){
        int days=1;
        while(!st.empty() and st.top().first<=price){
            days+=st.top().second;
          st.pop();
        }
        st.push({price,days});
        ans.push_back(days);
    }
    return ans;
  }
 int main(){
    vector <int> v={100,80,60,70,65,75,85};
    vector<int> res=span_Stock(v);
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}