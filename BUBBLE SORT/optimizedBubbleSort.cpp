#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[6]={5,4,6,3,2,1};
    int n=6;
    for(int i=0;i<n-1;i++){
        bool flag=true;    //sorted
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            flag=false;
            }
        }
        if(flag==true){   //having no swaping
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
