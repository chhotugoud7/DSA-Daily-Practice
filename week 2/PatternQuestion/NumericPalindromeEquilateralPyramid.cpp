#include<iostream>
using namespace std;

// numeric palindrome equilateral pyramid

//     1
//    121
//   12321
//  1234321
// 123454321

void NumericPalindromeEquilateralPyramid(int n){
    int k=n;
    for(int row=0; row<n; row++){
        int a=1;
        for(int col=0; col<k; col++){
            if(col<n-1-row){
                cout<<" ";
            }
            else if(col < n){
                cout<<a++;                
            }
            
            else if(col == n ){
                a = a-2;
                cout<<a--;
                                
            }
            
            else {
                cout<<a--;
            }
           
        }
        k++;
        cout<<endl;
    }
}

int main() {

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    NumericPalindromeEquilateralPyramid(n);

    return 0;
}