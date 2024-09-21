//WAP to print number from 1 to N.

#include <iostream>
using namespace std;
void print(int i ,int n){
    if(i>n)  return;   
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    print(2,8);
}