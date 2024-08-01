
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string s1="ram is a good boy.";
    string s2="good";
    if(s1.find(s2)==string::npos){
        cout<<"not found";
    }
    else{
        cout<<"found";
    }
    
}