#include<iostream>
using namespace std;

class student{
    public:
    string name;
     int age;
     bool gender; 
    
     void printInfo(){
        cout<<name<<endl;
         cout<<age<<endl;
          cout<<gender<<endl;
     

     } 
};
int main(){
  student a[3];
  for(int i=0;i<3;i++){
    cin>>a[i].name;
      cin>>a[i].age;
        cin>>a[i].gender;
       
  }
    for(int i=0;i<3;i++){
            a[i].printInfo();
         }

    return 0;
}