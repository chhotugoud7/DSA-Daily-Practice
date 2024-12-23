#include<iostream>
using namespace std;
//fancy 12 pattern

void fancy12Pattern(int n){

    for(int row=0; row<n; row++){
        for(int col=0; col<2*row+1; col++){
            if(col%2==0){
                cout<<row+1;
            }
            else
            cout<<"*";
        }
        cout<<endl;
    }
}

void invertedFancy12(int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<2*(n-row)-1; col++){
            if(col%2==0){
                cout<<n-row;
            }
            else
            cout<<"*";
        }
        cout<<endl;
    }
}

void fullFancy12(int n){
    fancy12Pattern(n);
    invertedFancy12(n-1);

}

int main(){
    int n;
    cout<<"Enter the value of n to print fancy 12 pattern"<<endl;
    cin>>n;

    fullFancy12(n);
    return 0;
}