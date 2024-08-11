//Sort the array of 0’s, 1’s.
#include <iostream>
#include<vector>
using namespace std;
void sortZeroesAndOnes(vector<int> &v){
    int n=v.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)  noz++;
        else  noo++;
    }
    //For print elements.
    for(int i=0;i<n;i++){
        if(i<noz)  v[i]=0;
        else v[i]=1;
    }
}

int main() {
    vector<int> v={1,0,1,0,0,1,0,0,1};
    cout<<"Original array:";
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Sorted Array:";
    sortZeroesAndOnes(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}