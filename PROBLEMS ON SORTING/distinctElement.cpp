//Given an array with n distinct elements,convert the given array to a form where all elements are in the range from 0 to n-1. The order of elements is the same ,i.e., 0is placed in the place of the smallest element, 1 is placed for the second smallest element ,...N-1 is placed for the largest element.

#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=5;
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(arr[j]<0) continue;
            else{
                if(min>arr[j]){
                min=arr[j];
                mindx=j;
                }
            }
            arr[mindx]=x;
            x++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
