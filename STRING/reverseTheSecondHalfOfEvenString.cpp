//Input a string of even length and reverse the second half of the string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cout << "Enter the string in even length : ";
    getline(cin, s);
    if (s.length() % 2 != 0){
        cout << "Please enter the string in even length. ";
        return 1;
   }
    int n = s.length();
    reverse(s.begin()+n/2, s.end());
    cout << "Reversed the second half of string : " << s << endl;
    return 0;
}
