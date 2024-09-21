//WAP to calculate the factorial of a given number .

#include<iostream>
using namespace std;

int factorial(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<factorial(n);
}