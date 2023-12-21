#include<iostream>
using namespace std;
int main(){
    int a=123;
    cout<<a<<endl;
  
    char b='V';
    //showing error bcz re declaration of same element
     // char b='abc';

    cout<<b<<endl;
    bool b1=false;
    cout<<b1<<endl;
    float f=1.2;
    cout<<f<<endl;
    double d=1.23;
    cout<<d<<endl;
    int size=sizeof(d);
    cout<<"size of a is- "<<size<<endl;

}