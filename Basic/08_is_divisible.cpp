#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    if(n%5 == 0 || n%3 == 0){
        cout<<n<<" is Divisible by 5 or 3";
    }else{
        cout<<n<<" is not Divisible by 5 or 3";
    }  

}