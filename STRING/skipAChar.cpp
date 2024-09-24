//WAP to remove a charecter from a string .

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Jai Shree Ram";
    string str1="";
    cout<<"Original string:"<<str<<endl;
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') str1+=str[i];
    }
    cout<<"String after remove 'a' is:"<<str1;
}