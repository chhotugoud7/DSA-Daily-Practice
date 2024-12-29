#include<iostream>
using namespace std;

int main (){

   // 2D array 

//    int arr[3][2] = {1,2,3,4,5,6};

// initialization method 2
    int arr[3][2] = {{1,2},
                     {3,4},
                     {5,6}};
                     
   int rows=3;
   int cols = 2;

   for (int i = 0; i< rows ; i++){
     for (int j=0; j<cols; j++){
        cout << arr[i][j]<< " ";
     }
     cout << endl;
   }



    return 0;
}