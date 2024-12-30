#include<iostream>
using namespace std;

int main (){

   // 2D array 

//    int arr[3][2] = {1,2,3,4,5,6};

// initialization method 2
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
                     
   int rows=3;
   int cols = 3;

   for (int i = 0; i< rows ; i++){
      cout<< arr[i][rows-1-i]<<" ";
   }



    return 0;
}