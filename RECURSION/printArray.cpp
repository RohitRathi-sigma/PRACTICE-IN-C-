//WAP to print the array using recursion.

#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    //base case
    if(idx==n) return;
    //process
    cout<<arr[idx]<<" ";
    //Recursive relation
    display(arr,n,idx+1);  
}
int main(){
    int arr[]={1,5,3,8,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements of array are:";
    display(arr, n, 0);
}