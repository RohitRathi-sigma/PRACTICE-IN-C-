//WAP to calculate the sum of n numbers .

#include <iostream>
using namespace std;
int sum(int n){
    //base case 
    if(n==0) return 0;

    //recursive relation
    return n+sum(n-1);
}
int main(){
    int n;
    cout<< "Enter the number of terms:";
    cin >>n; 
    cout <<sum(n);
}