#include<iostream>
using namespace std;

int main ( ){

    string sentence;

    // cin a line or a sentence with getline 
    getline(cin, sentence, '\n');

    cout<<sentence<<endl;

    return 0;
}