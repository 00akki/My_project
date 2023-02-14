#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string str="asfkjurbsicmfi";
transform(str.begin(),str.end(),str.begin(),::toupper);
cout<<str<<endl;

transform(str.begin(),str.end(),str.begin(),::tolower);
cout<<str<<endl;

return 0;
}