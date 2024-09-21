#include<iostream>
using namespace std;
void sum1ToN(int sum , int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1ToN(sum+n,n-1);
}
int main(){
    sum1ToN(0,5);
}