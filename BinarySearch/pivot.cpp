#include<iostream>

using namespace std; 

int findPivot(int arr[], int n){

    int s =0;
    int e = n-1;
    int mid = s + (e-s)/ 2;

    while (s<= e){
        if (arr[mid] > arr[mid + 1] && mid+1<n ){
            return mid;
        }
        if(arr[mid] < arr[s]){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }

    return mid;
}

int main (){

    int arr[10] ={100, 150, 200, 1000, 20, 30, 40, 45, 55, 70};

    int n = 10;

    int ans = findPivot(arr, n);
    cout<< "pivot index: "<< ans <<endl;

    return 0;
}