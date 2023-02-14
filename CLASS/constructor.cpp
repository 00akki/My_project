 #include<iostream>
 using namespace std;

 class Hero{
    public:
      int health;

      char level;
      Hero(){
        cout<<"default constructor"<<endl;
      }
 };
 int main(){
    Hero ramesh;
    // ramesh.health=40;
    // ramesh.level='B';
   // cout<<"health is "<<ramesh.gethealth()<<endl;
   // cout<<"health is "<<ramesh.level<<endl;
    return 0;
 }