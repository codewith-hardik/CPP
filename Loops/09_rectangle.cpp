#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Row : ";
    cin>>n;
    int m;
    cout<<"Enter Column : ";
    cin>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout<<"* ";
            // cout<<j+1<<" ";
            cout<<(char)(j+65)<<" ";

        }
        cout<<endl;
    }
    
 
}