#include<iostream>
using namespace std;
int countWays(int n){
    //base case 
    if(n==0 ||n==1) return 1;

    //Process
    if(n<0)  return 0;

    //recursive relation
    return countWays(n-1)+countWays(n-2);
}
int main(){
    int n;
    cout<<"Enter the number of stairs:";
    cin>>n;
    cout<<"No. of ways to climb "<< n <<" stairs is: "<<countWays(n);
}