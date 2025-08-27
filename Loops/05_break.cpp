#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number : ";
    cin>>n;
    // highest factor

    // int f = 1;
    // for (int i = 1; i < n; i++)
    // {
    //     if(n%i==0) f = i;
    // }
    // cout<<"Highest Factor is : "<<f;
     int f = 1;
    for (int i = n-1; i > 1; i--)
    {
        if(n%i==0){
            f = i;
            break;
        }
    }
    cout<<"Highest Factor is : "<<f;

    // is prime or not
    // bool isPrime = true;
    // for (int i = 2; i <= n/2; i++)
    // {
    //     if(n%i == 0){
    //         isPrime = false;
    //     }
    // }
    // if(isPrime){
    //     cout<<"Prime Number";
    // }else{
    //     cout<<"Composite number";
    // }
    
}