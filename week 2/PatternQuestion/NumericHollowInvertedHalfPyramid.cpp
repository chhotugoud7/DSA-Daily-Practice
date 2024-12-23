#include<iostream>
using namespace std;

// Numeric Hollow inverted Half Pyramid

// 12345
// 2  5
// 3 5
// 45
// 5


void NumericHollowInvertedHalfPyramid(int n){
    for(int row=0; row<n; row++ ){
        for(int col=0; col<n-row; col++){
            if(row==0 || row == n-1 || col == 0 || col+row==n-1)
                cout<<col+1+row;

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

    NumericHollowInvertedHalfPyramid(n);

    return 0;
}