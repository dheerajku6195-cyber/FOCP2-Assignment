#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the first player score";
cin>>a;
cout<<"enter the second player score";
cin>>b;
cout<<"enter the third player score";
cin>>c;
if(a>b&&a>c){cout<<"player 1 is winner";}
if(b>a&&b>c){cout<<"player 2 is winner";}
if(c>b&&c>a){cout<<"player 3 is winner";}
    
}