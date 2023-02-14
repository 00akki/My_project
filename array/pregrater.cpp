#include<iostream>
using namespace std;

int main(){
     int n; 
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }

   int mx=-1999999;
   for(int a=0;a<n;a++){
   mx=max(mx,arr[a]);     //max predefined function
  //  mx=min(mx,arr[a]);
    cout<<mx<<" ";
   }
   cout<<endl;
   
    return 0;
}
