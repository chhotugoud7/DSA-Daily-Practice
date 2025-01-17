
#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;

    while (s <=e ){
        //single element 
        if (s==e){
            return s;
            //its a single element so it is the odd occuring element

        }
        if (mid -1 >= 0 && arr[mid] != arr[mid-1] && mid+1<size && arr[mid] != arr[mid+1]){
            return mid;
            // iska duplicate nhi hain toh yhi single occuring ya odd occuring element hain
        }
        // duplicate on the left index
        if(mid-1 >= 0 && arr[mid] == arr[mid-1]){
            int pairStartingIndex = mid -1;
            if(pairStartingIndex & 1){
                // odd index
                // move to left
                e = mid -2;
            } else {
                // pairIndex is even means allready in the left part so move to right part 
                s = mid + 1; 

            }
        }

        // duplicate on the right index
         if(mid+1 <=size && arr[mid] == arr[mid+1]){
            int pairStartingIndex = mid;
            if(pairStartingIndex & 1){
                // odd index
                // move to left
                e = mid -1;
            } else {
                // pairIndex is even means allready in the left part so move to right part 
                s = mid + 2; 

            }
        }
        cout<<"mid index in function: "<<mid << endl;

        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    int arr[]= {1, 2, 2, 3, 3};
    int size = 5;
    // int arr[]= {1, 1, 2, 2, 3, 3, 4, 4,  5, 5, 6, 6, 7, 7, 8, 8, 10};
    // int size = 17;
    int ans = findOddOccuringElement(arr,size);

    cout<< "ans index: " <<ans<<endl;
    cout<< "ans element: " <<arr[ans]<<endl;

    return 0;
}