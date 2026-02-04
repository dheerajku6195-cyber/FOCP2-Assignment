#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<< "Elements: ";
    for(int x : v) {cout<<x<<"";
    cout << endl;}
    for (int i=0; i<3;i++){
        cout<<v[i];
    }

    cout<<"Size: "<<v.size() <<endl;
    cout<<"first element: "<<v.front()<<endl;
    v.pop_back();
    cout<<"After pop_back: ";
    for(int x: v)cout<< x<<"";
    cout<<endl;





}