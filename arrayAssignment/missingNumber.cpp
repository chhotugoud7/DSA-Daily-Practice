// missing number problem leetcode 268
//first method ^ zor use krke

// Brute Force 

#include<iostream>
#include <algorithm>
using namespace std;

int missingNumber(int arr[], int size ){
     sort(arr, arr + size);  // sorting array by using algorithm header file 
    for (int i = 0; i<size; i++){
      if ( i == arr[i]) continue;
      else return i;

    }
   
};

int main (){

    int arr[6] = {1, 4, 3, 6, 2, 0};

    int ans = missingNumber(arr, 6);
    cout<< "The missingNumber is: "<< ans << endl;

    return 0;
}