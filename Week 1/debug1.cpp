
// // 1st problem
// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if(c>='a' && c<= 'z'){
//         cout<<"0";
//     }
// 	else if(c>='A' && c<= 'Z'){
//         cout<<"1";
//     }
//     else{
//         cout<<"-1";
//     }
//     return 0;
// }


// 2st problem

/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int i=1;
    while(i<n+1 ){
        int j = i,count = 1;
        while(count<i+1){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }

    return 0;
}
