#include<iostream>
using namespace std;

int getLength(char arr[], int size){
    int count = 0;
    
    for( int i = 0 ; i < size; i++){
        if(arr[i] == 0){
            break;
        }
        count++;    
    }
    return count;
}

void reverseCharArray(char arr[], int size){
    int length = getLength(arr, size);
    int s = 0;
    int e = length - 1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++,e--;
    }
}

int main(){

    char arr[1000];
    cin >> arr;
    int len = getLength(arr, 1000);
    // cout<< len << endl;
    cout<< "before: " << arr << endl;
    reverseCharArray(arr, 1000);
    cout << "After: " << arr << endl;

    

    return 0;
}