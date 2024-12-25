// functions in array 

#include <iostream>
using namespace std;

// function for input values in an array
void arrayInput(int arr[], int size){
    for(int index=0; index<size; index++){
        cout<<"Enter value for index no. " << index <<endl;
        cin>>arr[index];
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
            return 1;
            
        }
    }
    return 0;
}

int main(){
    int arr[100];
    int size;
    int target;

    // input size of an array
    cout<<"Enter the size of an array that you want to create"<<endl;
    cin>>size;

    // input in an array and size 
    arrayInput( arr,  size);
    
    cout<<"Enter a valid taget number"<<endl;
    cin>> target;

    // print an array
    // arrayPrint( arr,  size);

    bool ans = findTarget(arr, size, target);
    // cout<< ans ;

    if (ans==1){
        cout<<"the target is present in the array"<<endl;
    } else{
       cout<<"the target is not present in the array"<<endl;
    }
    return 0;
}