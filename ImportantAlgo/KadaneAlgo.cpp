// This is kadane Algorithm very important
// max sum in a sliding window 
//  int arr[]= {1, 2, -2, -3, 2}; like in thsi its 3 with index 0 to 1 index
//53. Maximum Subarray -> leetcode
// used for finding subarray


#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

int kadaneAlgo(int arr[], int size){
  int ans= INT_MIN;
  int sum = 0;
    for(int i =0; i<size; i++){
        int num = arr[i];
        sum = sum + num;
        ans = max(ans, sum);
        if(sum<0) sum = 0;
    }
    return ans;
  
}

int main(){

    int arr[]= {1, 2, -2, -3, 2};
    int size = 5;
    
    int ans = kadaneAlgo(arr,size);

    cout<< "Max sum: " <<ans<<endl;

    return 0;
}