#include<iostream>
#include<ios>
#include<limits>
using namespace std;
int main()
{
    int a;
    string b;
    cout<<"a"<<endl;
    cin>>a;
    cout<<"b"<<endl;
    // cin.ignore(numeric_limits<streamsize>::max(),'\n');
    // cin.getline(b,80);
    // cin>>b;
    // cin.sync();
    cin>>ws;
    getline(cin,b);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    return 0;

}