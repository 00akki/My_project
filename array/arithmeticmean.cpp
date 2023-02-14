#include<iostream>
using namespace std;
int main(){
    int x; cin>>x;
    int win[x];
    for(int a=0;a<x;a++){
        cin>>win[a];
    }

    int ans=2;
    int j=2;
    int current=2;

    while(j<x){
        int pd=win[1]-win[0];
        if(pd==win[j]-win[j-1]){
            current++;
        }
        else{
            pd=win[j]-win[j-1];
            current =2;
        }
          ans=max(current,ans);
        j++;     
    }
    cout<<ans<<endl;
    return 0;
}