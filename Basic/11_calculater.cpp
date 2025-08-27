#include <iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter Operator: ";
    cin>>ch;
    cout<<"Enter 2nd number: ";   
    cin>>b;
    switch (ch)
    {
    case '+':
        cout<<"sum : "<<a+b;
        break;
    case '-':
        cout<<"minuse : "<<a-b;
        break;
    case '*':
        cout<<"multiplication : "<<a*b;
        break;
    case '/':
        cout<<"dividition : "<<a/b;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
}