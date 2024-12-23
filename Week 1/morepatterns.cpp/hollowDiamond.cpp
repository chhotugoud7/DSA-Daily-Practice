#include<iostream>
using namespace std;
// to print hollow Diamond 
void hollowPyramid(int n){
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        } 
        // stars
        for(int col=0; col<row+1; col++){
            if(col==0 || col==row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }  
        cout<<endl;  
    }
}

void invertedHollowPyramid(int n){
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        } 
        // stars
        for(int col=0; col<n-row; col++){
            if( col == 0 || col == n-row-1)
            cout<<"* ";

            else
            cout<<"  ";
        }  
        cout<<endl;  
    }
}

void hollowDiamond(int n){
    hollowPyramid(n);
    invertedHollowPyramid(n);
}

int main(){

    int n;
    cout<<"Enter the value of n to print diamond"<<endl;
    cin>>n;

    hollowDiamond(n);
    return 0;
    
}