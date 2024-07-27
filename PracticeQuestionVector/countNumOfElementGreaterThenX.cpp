//Count the number of element greater then x. 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(6);
    cout<<"enter the element of vector:";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;

    int count=0;
    cout<<"elements greater then "<<x<<" is ";
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;

    return 0;
}
