#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the length of cuboid: ";
    cin>>a;
    cout<<"Enter the width of cuboid: ";
    cin>>b;
    cout<<"Enter the height of cuboid: ";
    cin>>c;
    float volume = a*b*c;
    cout<<"The volume of cuboid having length "<<a<<" width "<<b<<" and height "<<c<<" is "<<volume;
}