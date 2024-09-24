//WAP to calculate the max value in the array using inbuilt function in recursion.

#include<iostream>
using namespace std;
int INT_MIN;
int maxINArray(int arr[], int n, int idx ){
    //base case
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxINArray(arr, n, idx+1));
}
int main(){
    int arr[]={1,7,5,11,25,29};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< maxINArray(arr, n, 0);
}