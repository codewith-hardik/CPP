#include <iostream>
using namespace std;
int main(){
    int n;
    int r = 0;
    cout<<"Enter a number : ";
    cin>>n;
    while (n != 0)
    {
        int ld = n%10;
        r = r*10;
        r = r + ld;
        n = n/10;
    }
    cout<<"Reverse Number is "<<r;
}