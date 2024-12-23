#include<iostream>
using namespace std;
// hollow square

// * * * * *
// *       *
// *       *
// *       *
// * * * * *


int main()
{
    int side;
    cout<<"Enter side of square to make hollow square"<<endl;
    cin>> side;

    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            
            if(i==0 || i==side-1 || j==0 || j==side-1){
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