#include <iostream>
using namespace std;
// inverted pyramid

// * * * * * 
// * * * * 
// * * * 
// * * 
// * 


int main(){
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n - row; col++){
            cout << "* ";
        }
        cout<<endl;
    }

    return 0;
}