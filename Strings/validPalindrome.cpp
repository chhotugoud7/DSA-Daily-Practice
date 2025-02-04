#include <iostream>
using namespace std;

// checking the valid palindrome of a string with at most one character deletion...

bool checkPalindrome(string str, int s, int e)
{
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    // valid palindrome
    return true;
}
bool validPalindrome(string s)
{
    int len = s.length();
    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        // same
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        // different
        else
        {
            // s[i] != s[j]
            // iss case me character deleter krke dekho
            // 2 options
            //  delete ith index character
            bool ansOne = checkPalindrome(s, i + 1, j);
            // delete jth index character
            bool ansTwo = checkPalindrome(s, i, j - 1);
            bool finalAns = ansOne || ansTwo;
            return finalAns;
        }
    } // means this is palindrome with out charater delete
    return true;
}

int main()
{

    string word;
    cin >> word;
    cout << "this is the given string: " << word << endl;

    if(validPalindrome(word)){
        cout<<"this is a valid palindrome with at most one char deletion"<<endl;
    }
    else{
    cout << "this is not a valid palindrome " << endl;

    }
    return 0;
}