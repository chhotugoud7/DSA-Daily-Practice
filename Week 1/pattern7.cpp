#include<iostream>
using namespace std; 
// 12345
// 1234
// 123
// 12
// 1
int main(){

    int n; 
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for (int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<col+1;

        }
        cout<<endl;
    }

    return 0;
}