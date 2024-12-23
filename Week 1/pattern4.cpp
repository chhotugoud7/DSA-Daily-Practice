#include <iostream>
using namespace std;
// hollow pyramid

// *
// * *
// *   *
// *     *
// * * * * *


int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    // for (int row = 0; row < n; row++){
    //     for (int col = 0; col < row + 1; col++){
    //         if( row==0 || row==n-1 || col==0 || row==col){
    //             cout << "* ";
    //         }
    //         else{
    //             cout<<"  ";
    //        }
    //     }
    //     cout<<endl;
    // }

    for (int row = 0; row < n; row++)
    {
        int totalcol = row + 1;
        for (int col = 0; col < totalcol; col++)
        {   
            //1st 2nd and last row
            if (row == 0 || row == 1 || row == n - 1)
            {
                cout << "* ";
            }
            else
            {
                // middle rows
                if (col == 0 || col == totalcol -1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}