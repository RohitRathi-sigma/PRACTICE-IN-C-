// given a sentence ,split every word in diff line.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string s="i live in hostel no 12";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}