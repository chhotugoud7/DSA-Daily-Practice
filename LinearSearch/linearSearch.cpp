// functions in array 

#include <iostream>
using namespace std;

// function for input values in an array
void arrayInput(int arr[], int size){
    for(int index=0; index<5; index++){
        cout<<"Enter value for index no. " << index <<endl;
        cin>>arr[index];
    }
}

// function to multiply each number with 10
void multiplyArrayBy10(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]=arr[i] * 10;
    }
}

//function for print an array 
void arrayPrint(int num[], int size){
    // printing the input values in the array arr
    cout<<"here are the values in the array arr"<<endl;
    for(int index=0; index<5; index++){
        cout<<num[index]<<" ";
    }
    cout<<endl;
}

// l]find target by using linear search
bool findTarget (int arr[], int size, int target){
    // traverse the entire loop by using linear search
    for ( int i =0; i<size; i++){
        if( arr[i]== target){
            return true;
        }
    }
    // in the loop there is no target element so there is no target element in the array
    return false;
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int target;

    // input in an array
    // arrayInput( arr,  size);
    
    cout<<"Enter a valid taget number"<<endl;
    cin>> target;

    // multiply by 10
    // multiplyArrayBy10(arr, size);

    // print an array
    // arrayPrint( arr,  size);

    bool ans = findTarget(arr, size, target);
    cout<<ans;
    return 0;
}