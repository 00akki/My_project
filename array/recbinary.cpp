#include<iostream>
#include<algorithm>
using namespace std;
 int recursion_Binary(int arr[],int key,int s,int e){
    if(s==e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
         recursion_Binary(arr,key,s,mid-1);
    }
    else {
         recursion_Binary(arr,key,mid+1,e);
    }
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    std:: sort(arr,arr+n);  //for sortd array
    for(int a=0;a<n;a++){
     cout<<arr[a]<<" ";
    }
    cout<<"\n";
    int key; cin>>key;
    int b=recursion_Binary(arr,key,0,n);
    cout<<b<<endl;
    return 0;

}