#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the value for a"<<endl;
    cin>>a;
    cout<<"Enter the value for b"<<endl;
    cin>>b;
    if(a==b){
         cout<<"Both a and b is equal to each other"<<endl;
    }
    else if(a>b){
        cout<<a<<" is bigger"<<endl;
    }
    else{
        cout<<b<<" is bigger"<<endl;
    }

}