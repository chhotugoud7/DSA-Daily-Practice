#include<iostream>
using namespace std;

int getLength(char arr[], int size){
    int count=0;
    int index=0;
    while ( arr[index] != '\0'){
        count++;
        index++;
    }

    return count;
}

int main(){

    char arr[1000];
    cin>> arr;
    cout<<getLength(arr,1000)<<endl;

    return 0;
}