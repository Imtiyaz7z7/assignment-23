#include<iostream>
using namespace std;
int main(){
    int a=2,b=3;
    cout<<"Before swap"<<endl;
    cout<<"a - "<<a<<endl;
    cout<<"b - "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap"<<endl;
    cout<<"a - "<<a<<endl;
    cout<<"b - "<<b<<endl;
}