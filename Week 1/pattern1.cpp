#include<iostream>
using namespace std;
// Hollow rectangle

// * * * * * * * * * *
// *                 *
// *                 *
// *                 *
// * * * * * * * * * *


int main()
{
    int row, column;
    cout<<"Enter row and column"<<endl;
    cin>> row;
    cin>> column;

    for(int i=0; i<row; i++){

        for(int j=0; j<column; j++){
            
            if(i==0 || i==row-1 || j==0 || j==column-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}