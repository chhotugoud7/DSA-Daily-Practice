//get quotent without using / and % 
// numbers can be either positive or negative 


#include<iostream>
using namespace std;

int getQuotient (int divident, int divisor){
    // search space -> o to dividend

    int s = 0;
    int e = divident;
    int mid = s+ (e-s)>>1; // on the place of / with use >>1 right shift by one to divide 

    int ans = -1;

    while (s <= e){
        if ((divisor * mid) == divident ){
            return mid; 
            // in this case mid is the exact number that we need

        }
        if ( (divisor * mid) < divident){
            // store and compute
            ans = mid;
            s = mid + 1;
        }
        else{
            //left search space me jao 
            e = mid -1;
        }
        // mid update
        mid = s+ (e-s)>>1;
    }
    return mid ;
}

int main ( ){
    int divident = -10;
    int divisor = 2;

    // with the help of abs we only send positive value to get ans 
    int ans = getQuotient( abs(divident), abs(divisor));
    // abs se only positive number hi jayega 
    if ( ( divident <0 && divisor > 0 ) || (divident< 0 && divisor > 0)){
        ans = 0-ans;
    }
    cout << "Final Ans: " << ans <<endl;


    return 0;
}