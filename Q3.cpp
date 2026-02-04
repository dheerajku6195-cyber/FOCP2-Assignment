#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the unit of temperature c or f: ";
    cin>>a;
  float t;
    if(a=='c') {cout<<"Enter the temperature: ";
    cin>>t;
    float n=(t*9/5)+32;
    cout<<"Temperature in f is: "<<n;}
    else{  cout<<"Enter the temperature: ";
    cin>>t;
    float p=(t-32)*5/9;
    cout<<"Temperature in c is: "<<p;}
    




}