#include<iostream>
using namespace std;

void countZeroesAndOnes(int arr[], int n){
    int Zeroes=0;
    int Ones=0;
    //traverse the array
    for (int i =0; i<n; i++){
        if(arr[i]==0){
            Zeroes++;
        }
        if(arr[i]==1){
            Ones++;
        }
    }
    cout<<"total zeroes are: " << Zeroes << endl;
    cout<< "total Ones are: " << Ones << endl;
}

void inputArray(int arr[], int size){
    for(int index = 0; index < size; index++){
        cout<< "Enter the value for index = " << index <<endl;
        cin>> arr[index];
    }
}

int main(){
    int arr[100];
    int size;
    cout<< "Enter the size of array you want to create"<<endl;
    cin>>size;

    inputArray(arr,size);
    
    countZeroesAndOnes(arr, size);

    return 0;
}