// two sum problem    or
// key pair problem 

// In this the time complexity O(n.n)

#include<iostream>
using namespace std;

bool keyPair(int arr[], int size , int target){

    for (int i =0; i< size; i++){
        for (int j= i+1; j<size; j++){
            if(arr[i] + arr[j] == target ){
                return 1;
            }
        }
    }
    return 0;
};

int main (){
    int arr[6] = {1, 4, 45, 6, 10, 8};
    int target = 16;

    bool ans = keyPair(arr, 6, target);
    if(ans){
        cout<< "The Pair is present in the array "<< endl;
    } else {
         cout<< "The Pair is not present in the array "<< endl;
    }

    return 0;
}