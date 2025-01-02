// find pivot index problem leetcode 724
// pivot index is: from which left sum and right sum all respected element is equal

// Brute Force 

#include<iostream>
using namespace std;

int pivotIndex(int arr[], int size ){

    for (int i =0; i<size; i++){
        int leftSum = 0 ;
        int rightSum = 0;

        //finding leftSum excluding current index;
        for (int j = 0; j<i; j++)
            leftSum += arr[j];

        //finding rightSum excluding current index;
        for ( int j = i+1; j<size; j++)   
            rightSum += arr[j];
        
        //print all loops 
        cout<<"for index: "<<i<<" left sum: " << leftSum << " Right Sum: " << rightSum<<endl;
        if(leftSum == rightSum) return i;    
          
    }
    return -1;
};

int main (){

    int arr[6] = {1, 4, 13, 6, 10, 8};

    int ans = pivotIndex(arr, 6);
    cout<< "The pivot index is in the array is: "<< ans << endl;

    return 0;
}