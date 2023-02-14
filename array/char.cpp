#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
     
    char arr[n+1];
    cin>>arr;

    bool check=1;

    for(int a=0;a<n;a++){
        if(arr[a]!=arr[n-1-a]){
            check=0;
            break;
        }

    }
    if(check==true){
        cout<<"Word is palindrome"<<endl;

    }
    else{
         cout<<"Word is not palindrome"<<endl;

    }
    return 0;


}