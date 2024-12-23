#include <iostream>
using namespace std;

// ABCBA PATTERN

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA


void ABCBA(int n){
    for(int i=0; i<n; i++){
        char ch= 'A';
        for(int j=0; j<i+1; j++){
            cout<<ch++;
        }

        // for ba
        ch--;
        while(ch >'A'){
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){

    int n; 
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    ABCBA(n);
    return 0;
}