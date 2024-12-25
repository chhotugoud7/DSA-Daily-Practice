// functions in array 

#include <iostream>
using namespace std;

// function for input values in an array
int arrayInput(int arr[], int size){
    for(int index=0; index<5; index++){
        cout<<"Enter value for index no. " << index <<endl;
        cin>>arr[index];
    }
}

//function for print an array 
int arrayPrint(int num[], int size){

    // printing the input values in the array arr
    cout<<"here are the values in the array arr"<<endl;
    for(int index=0; index<5; index++){
        cout<<num[index]<<" ";
    }
    cout<<endl;
}
int main(){


    int arr[5];
    int size=5;

    // input in an array

    arrayInput( arr,  size);

    // print an array
    arrayPrint( arr,  size);

    

    return 0;
}