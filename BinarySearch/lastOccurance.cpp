#include <iostream>

using namespace std;

void findLastOccurence(int arr[], int n, int target, int &ansIndex){
    //ansIndex is pass by reference

    int s= 0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while (s<=e){
        if(arr[mid] == target){
            //target ke equal toh hain 
            // but may or may not be last occurance
            //store and compute method
            ansIndex = mid;
            s = mid+1;
        }
        if(target>arr[mid]){
            // agar target element bda ahin arr mid element se to right me jao
            s = mid+1;
        }
        if(target<arr[mid]){
            //target arr mid se chota hain to left me jao 
            e = mid -1;
        }
        //at the end mid ko update kro
        mid = s + (e-s)/2;
    }
}

int main()
{
    int arr[]= {5,10,20,30,40,50,50,50,50,50,50,50,50,80,100};
    
    int n=15;
    int target = 50;
    int ansIndex = -1;

    findLastOccurence(arr,n,target,ansIndex);
    cout<<" Last Occurance Index: " << ansIndex<<endl;
    return 0;
}