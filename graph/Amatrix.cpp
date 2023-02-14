#include<bits/stdc++.h>
using namespace std;

int main(){ 
 int n,m; 
 cout<<"\nEnetr the number of vertex and edges\n"<<endl;
 cin>>n>>m;
 int adj[n+1][m+1];
 for(int i=0;i<m;i++){
  int v,u;
  cin>>v>>u;
  adj[v][u]=1;
  adj[u][v]=1;
 }
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
    cout<<adj[i][j]<<" ";
   }
   cout<<endl;
 }
  return 0;
}