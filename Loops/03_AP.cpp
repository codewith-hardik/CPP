#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;

    // 1,3,5,7,9....
    // for(int i = 1; i<= 2*n - 1;i+=2 ){
    //     cout<<i<<" ";
    // }   
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        a+=2;
    }
    
}