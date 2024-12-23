#include <iostream>
using namespace std;

int main(){

    // array creation 
    int arrCreation[10];

    int arr1[] = {10,20,30,40};

    // array fill with same number 
    int arr[4];
    fill(arr, arr + 4, 20);

    // printing array
    for (int i = 0; i<4; i++){
        cout << arr[i]<< " ";
    }



    return 0;
}