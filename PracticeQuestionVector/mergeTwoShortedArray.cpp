#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> res(m+n);
    int i=0; //arr1
    int j=0;  //arr2
    int k=0; //res
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
        }
        else{
            res[k]=arr2[j];
            j++;
        }
        k++;
        if(i==n){
            while(j<=m-1){
                res[k]=arr2[j];
                k++;
                j++;
            }
            if(j==m){
                while(i<=n-1){
                    res[k]=arr1[i];
                    i++;
                    k++;
                }
            }
        }
        return res;
    

    }

     
}
int main(){
    vector<int>arr1;
    arr1.push_back(9);
    arr1.push_back(7);
    arr1.push_back(5);
    arr1.push_back(3);
    arr1.push_back(2);

    vector<int>arr2;
    arr1.push_back(5);
    arr1.push_back(4);
    arr1.push_back(3);
    arr1.push_back(2);
    arr1.push_back(1);

    vector<int> v=merge(arr1, arr2);
    


}