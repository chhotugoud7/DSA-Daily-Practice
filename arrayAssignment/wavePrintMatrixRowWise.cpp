#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v)
{
    int m = v.size(); // rows
    int n = v[0].size(); // column 
    cout<< " m : " << m << endl;
    cout << " n: "<< n << endl;
    for (int startCol = 0; startCol < n; startCol++)
    {
        cout << "startCol: " << startCol << " " << endl;
        // even no of col -> Top to bottom.
        if ((startCol & 1) == 0)
        {
            cout << " if even  ((startCol & 1) == 0): " << ((startCol & 1) == 0) << " " << endl;
            for (int i = 0; i < m; i++)
            {
                cout << "for index i and j: "<<i<< " and : "<<startCol<<" : "<< v[i][startCol] << " " << endl;
            }

        }
        else
        {
                        cout << " if odd  ((startCol & 1) != 0): " << ((startCol & 1) == 0) << " " << endl;

            // odd no of col -> Bottom to top
            for (int i = m - 1; i >= 0; i--)
            {
                cout << "for index i and j: "<<i<< " and : "<<startCol<<" : "<< v[i][startCol] << " " << endl;
            }
        }
    }
}


void wavePrintMatrixRow(vector<vector<int>> v)
{
    int m = v.size(); // rows
    int n = v[0].size(); // column 
    
    for (int startCol = 0; startCol < m; startCol++)
    {
        // even no of rows -> Top to bottom.
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < n; i++)
            {
              cout <<v[startCol][i] << " ";
            }

        }
        else
        {

            // odd no of rows -> Bottom to top
            for (int i = n - 1; i >= 0; i--)
            {
                cout <<v[startCol][i] << " ";
            }
        }
    }
}


int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},

    };

    wavePrintMatrixRow(v);

    return 0;
}