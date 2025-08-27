#include <iostream>
using namespace std;
int main(){
    float si,p,r,t;
    cout<<"Enter Price : ";
    cin>>p;
    cout<<"Enter Reat : ";
    cin>>r;
    cout<<"Enter time : ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"Simple Interest : "<<si<<endl;


}