#include<iostream>
using namespace std;

// Numeric Hollow Half Pyramid

// 1
// 12
// 1 3
// 1  4
// 12345


void NumericHollowHalfPyramid(int n){
    for(int row=0; row<n; row++ ){
        for(int col=0; col<row+1; col++){
            if(row==0 || row == n-1 || col == 0 || col == row)
                cout<<col+1;

            else
                cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    NumericHollowHalfPyramid(n);

    return 0;
}