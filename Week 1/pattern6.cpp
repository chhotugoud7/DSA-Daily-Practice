#include<iostream>
using namespace std; 
// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
int main(){

    int n; 
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for (int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<col+1;

        }
        cout<<endl;
    }

    return 0;
}