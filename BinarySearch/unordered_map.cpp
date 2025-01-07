#include<iostream>
#include<unordered_map>

using namespace std;

int main () {

    unordered_map<int, int> roll_no;
    
    //insertion
    roll_no[1] = 11;
    roll_no[2] = 12;
    roll_no[3] = 14;
    // can be reasign 

    //iterate
    unordered_map<int, int >::iterator it;// syntax to access each entry in map 
    for(it = roll_no.begin(); it != roll_no.end(); it++)
    {
        int key = it->first; // syntax
        int value = it->second;
        cout<< "key: " << key << " " << "Value: "<< value <<endl;
    }

    //find? table/map me value found krne ka tareeka 
    if ( roll_no.find(2) != roll_no.end())
    {
        //found
        int value = roll_no[2];
        cout<<"Found: "<< value<< endl;
    }
    else
    {
        // not found
         cout<<"Not Found "<<endl;
    }

    //deletion
    //always deletion by the key
    roll_no.erase(2);

    cout<< "After Erase or deletion "<< endl;
    // unordered_map<int, int>::iterator it;
    // defining again so comment it do not define again 
    for( it = roll_no.begin(); it != roll_no.end(); it++)
    {
        int key = it->first;
        int value = it->second;
        cout<<"key: "<<key<<" "<<"Value: "<<value<<endl;
    }

    // again find 2 After deletion
    if ( roll_no.find(2) != roll_no.end())
    {
        //found
        int value = roll_no[2];
        cout<<"Found: "<< value<< endl;
    }
    return 0;
}