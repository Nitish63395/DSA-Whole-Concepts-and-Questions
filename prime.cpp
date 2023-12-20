#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the value for n "<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime numbr"<<i<<endl;
        }

        else{
            cout<<"prime "<<i<<endl;
        }
        i=i+1;
    }
    
 }