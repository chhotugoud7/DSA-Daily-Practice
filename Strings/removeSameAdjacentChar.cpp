 #include<iostream>
 using namespace std;


 string removeDuplicates(string s) {
        string ans= "";
        int n = s.length(); // length of s string
        for ( int i = 0; i < n; i++){
            char currentCharacter = s[i];
            if(ans.empty()){
                ans.push_back(currentCharacter);
            }
            else if (currentCharacter == ans.back()){
                ans.pop_back();
            }
            else if(currentCharacter != ans.back()){
                ans.push_back(currentCharacter);
            }
        }
        return ans ;
    }


int main(){

    string word;
    cin>>word;
    cout<<"this is the given string: "<< word<<endl;

    string finalAns = removeDuplicates(word);
    cout<<"this is the ans: "<< finalAns<< endl;
    return 0;
}