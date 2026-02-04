#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the item no.: ";
    cin>>a;
    cout<<"Enter the quantity: ";
    cin>>b;
    cout<<"Enter the amount: ";
    cin>>c;
    int t=b*c;
    cout<<"Total before discount: "<<t;
    int n=t*80/100;
    cout<<"\nTotal after discount: "<<n;
   


    

}