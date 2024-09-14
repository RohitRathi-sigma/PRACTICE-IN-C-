#include <iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0)
    return 1;

    //recursive relation
    // int smallProblem=power(n-1);
    // int biggerProble=2*smallProblem;
    // return biggerProble;
    return 2*power(n-1);
}

int main(){
    int n ;
    cout <<"Enter the power :";
    cin>>n;
    int ans= power(n);
    cout<< ans;

    return 0;
}