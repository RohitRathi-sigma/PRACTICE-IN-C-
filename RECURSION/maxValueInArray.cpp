//WAP to calculate the max value in the array using rcursion.

#include<iostream>
using namespace std;
void printMax(int arr[], int n, int idx, int max){
    //base case
    if(idx==n){
        cout<<max;
        return;
    }
    //Process
    if(max<arr[idx]) max=arr[idx];
    //recursive relation
    printMax(arr, n, idx+1, max);
}
int main(){
    int INT_MIN;
    int arr[]={1,7,5,11,25,29};
    int n=sizeof(arr)/sizeof(arr[0]);
    printMax(arr, n, 0, INT_MIN);
}