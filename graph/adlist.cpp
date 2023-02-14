#include<bits/stdc++.h>
using namespace std;

 void add_E(vector<int> adj[],int u,int v){
      adj[v].push_back(u);
      adj[u].push_back(v);
 }
 void printf(vector<int> adj[],int V){
    for(int i=0;i<V;i++){
       cout<<"\nAjacent list is"<<i<<"\nhead ";
       for(auto j:adj[i]){
         cout<<"->"<<j;
          }
         cout<<endl;
       }
 }
int main(){
    int V=5;
    vector<int> adj(V);
    add_E(adj , 0 , 1);
    add_E(adj,0,1);
    add_E(adj,0,1);
    add_E(adj,0,1);
    add_E(adj,0,1);
    add_E(adj,0,1);
    printf(adj,V);
    return 0;
}