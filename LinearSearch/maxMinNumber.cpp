// functions in array 

#include <iostream>
#include <climits>
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
// function to find max number in an aray
int findMax(int arr[], int size){
      int maxAns = INT_MIN;
    for (int i=0; i<size; i++){
    //   maxAns = max(maxAns, arr[i]);

    if(maxAns < arr[i]){
        maxAns = arr[i];
    }
    }

    return maxAns;
}
// function to find min number in an aray
int findMin(int arr[], int size){
      int minAns = INT_MAX;
    for (int i=0; i<size; i++){
    //   mixAns = min(minAns, arr[i]);

    if(minAns > arr[i]){
        minAns = arr[i];
    }
    }

    return minAns;
}

int main(){
    int arr[100];
    int size;

    // input size of an array
    cout<<"Enter the size of an array that you want to create"<<endl;
    cin>>size;

    // input in an array and size 
    arrayInput( arr,  size);
    // print an array
    // arrayPrint( arr,  size);

   cout << "max number is " << findMax(arr, size)<< endl;
   cout << "min number is " << findMin(arr, size)<< endl;
    return 0;
}

