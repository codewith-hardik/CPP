#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    // 1,2,4,8,18,32....
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        a *= 2;
    }
       
}