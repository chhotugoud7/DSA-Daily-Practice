// missing elements from an array with duplicates
// By visiting method -> we visit a element and mark it as negative

// here we treat elements like index and this is the catch 
// here the range is the main point like [1, N]


#include<iostream>
using namespace std;

int findMissing(int arr[], int n){
    // visited method 
    for(int i = 0; i<n; i++){
        int index = abs(arr[i]);
        cout<<"Index: "<< index << " For i = "<< i <<endl;
        
        if(arr[index -1] > 0){
            // if value of array is or element is greater than zero only when it is applied 
            // the at the end there is only that elements are positive that are duplicate 
            // cout<<"arr[index -1]: " <<arr[index -1]<< endl;
            arr[index -1] = arr[index -1] * -1;
            // cout<<"multiplying by -1, arr[index -1]: " <<arr[index -1]<< endl;
        }
        cout<<endl;  
    }
    //printing all elements in the array
    for ( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // printing duplicate elements
    for ( int i = 0; i<n; i++){
        if(arr[i]>0){
            cout<< i + 1<< " ";
        }
        
    }
     
}

int main (){

    int arr[] = {1,3,5,3,4};
    int n;
    n = sizeof(arr)/sizeof(int); // size of array 

    findMissing(arr,n);

    return 0;
}