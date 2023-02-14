#include<stdio.h> 
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int b=0;b<n;b++){
        scanf("%d",&A[b]);
    } 
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(A[j]<A[i]){
        int temp=A[j];
        A[j]=A[i];
        A[i]=temp;    
       }
     }
   }
    for(int b=0;b<n;b++){
        printf("%d ",A[b]);
    }
    return 0;
}