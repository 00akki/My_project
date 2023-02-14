#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s="48597623";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s[0]<<endl;

}
