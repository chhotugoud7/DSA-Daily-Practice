#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> findComplement(vector<int> binary){
    //step 1, flip the bits
    int n = binary.size();
    vector<int> twosComp(n+1, 0); // vector twosComp ka n+1 size hain and usko 0 se intialize kiya hain means usme intially sabhi digits 0 hogi. 

    for (int i=n-1, k=twosComp.size()-1; i>=0; i--, k--){
        twosComp[i] = binary[i] == 0 ? 1 : 0;
    }
    //step 2. add 1
    int carry = 1;
    for(int i= twosComp.size()-1; i>=0; i--){
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;
    }
    if(carry){
        twosComp[0]=1;
    }

    return twosComp;
}
int main () {

    vector<int> binary = {1,1,1,0,1,0,1,1,0};
    vector<int> twosComp = findComplement(binary);
    for(int i = 0; i<twosComp.size(); i++){
        cout<<twosComp[i];
    }

    cout<<endl;
    return 0;
}