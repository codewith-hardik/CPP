#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Row : ";
    cin>>n;
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         // cout<<"* ";
    //         // cout<<j+1<<" ";
    //         cout<<(char)(j+65)<<" ";

    //     }
    //     cout<<endl;
    // }

      for (int i = 1; i <= n; i++)
    {
        for (int j = n; i <= j; j--)
        {
            // cout<<"* ";
            // cout<<n - j + 1 <<" ";
            cout<<(char)(n - j + 1 +64)<<" ";

        }
        cout<<endl;
    }
    
 
}