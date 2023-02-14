#include<iostream>
#include<time.h>
using namespace std; 

int main(){ 
     int y;
    do{   

          srand(time(NULL));
    cout<<"\nWelcome to guess number game\n"<<endl;
    int a= rand()%100;
    //  cout<<a<<endl;
    int x,count=1;

     while(x!=a){
            cout<<"Enter number :";
            cin>>x;
    if(x==a && x<100){        
        cout<<" HURRAY! You won the game"<<endl;
        cout<<"You use "<<count<<" chances to win the game"<<endl;
    }else if(x<a && x<100){
        cout<<"Smaller"<<endl;
        count++;
    }else if(x>a && x<100){
         cout<<"Greater"<<endl;
         count++;
    }else{
        cout<<"Enter number between 1 to 100\n"<<endl;
        count++;
    }
  }
  cout<<"Do you want to play again press : 1\n"<<endl;
  cin>>y;
 } while(y==1); 
    return 0;
}