#include<iostream>
using namespace std;
// MIXPYRAMID

void mixPyramid(int n){
    //part 1
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        for(int col=0; col<2*row+1; col++){
            cout<<" ";
        }
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    //part 2
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        for(int col=0; col<2*(n-row)-1; col++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    


}



int main(){
    int n; 
    cout<<"Enter the value of n to print mixPyramid"<<endl;
    cin>>n;

    mixPyramid(n);
    
    return 0; 
}