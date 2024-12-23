#include <iostream>
using namespace std;

int main(){

    // input in an array

    int arr[5];
    for(int index=0; index<5; index++){
        cout<<"Enter value for index no. " << index <<endl;
        cin>>arr[index];
    }

    // printing the input values in the array arr
    cout<<"here are the values in the array arr"<<endl;
    for(int index=0; index<5; index++){
        
        cout<<arr[index]<<endl;
    }


    return 0;
}