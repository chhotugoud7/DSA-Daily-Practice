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

void pallindromCheck(char arr[], int size){
    int length = getLength(arr, size);
    int s = 0;
    int e = length - 1;

    while(s<e){
        if(arr[s] == arr[e]){
             s++, e--;
        }
        else{
            // palindrome nhi hain 
            // means false hain 
            cout<< "Not a palindrome" << endl;
            return;
        }
    }

    // means its a palindrome 
    cout<< "It's a valid palindrome" << endl;

}

int main(){

    char arr[1000];
    cin >> arr;
    int len = getLength(arr, 1000);
    // cout<< len << endl;
    pallindromCheck(arr, 1000);
    

    return 0;
}