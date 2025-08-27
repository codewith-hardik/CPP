#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side size : ";
    cin>>a;
    cout<<"Enter 2nd side size : ";
    cin>>b;
    cout<<"Enter 3rd side size : ";
    cin>>c;   
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Triangle is Possible.";
    }else{
        cout<<"Triangle is Not Possible";
    }
}