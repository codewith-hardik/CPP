#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit";
    }else if(sp == cp){
        cout<<"No Profit NO Loss";
    }else{
        cout<<"Loss";
    }   
}