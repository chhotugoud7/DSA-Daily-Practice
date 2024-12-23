#include<iostream>
using namespace std;

// SolidHalfDiamond
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void SolidHalfDiamond(int n){
    // first way
    // // first outer loop
    // for(int row=0; row<n; row++ ){
    //     for(int col=0; col<row+1; col++){
    //             cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    // //second outer loop
    // for(int row=0; row<n-1; row++ ){
    //     for(int col=0; col<n-1-row; col++){
    //             cout<<"*";
    //     }
        
    //     cout<<endl;
    // }

    // second way -----------------------------

    for(int row=0; row<2*n-1; row++ ){
        // int condition=0;
        //growing phase
        // if(row < n){
        //     condition = row ;
        // }
        // //shrinking phase
        // else{
        //     condition = n - (row % n)-2;
        // }
        // by ternary operator or condition operator
        int condition = row < n ? row : n-(row%n)-2;
        for(int col=0; col<=condition; col++){
                cout<<"*";
        }
        
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    SolidHalfDiamond(n);

    return 0;
}