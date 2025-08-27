#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A number : ";
    cin>>n;
    // if(n%2 == 0){
    //     cout<<"Even Number";
    // }else{
    //     cout<<"Odd Number";
    // }
    n%2==0 ? cout<<"Even Number" : cout<<"Odd Number";

}