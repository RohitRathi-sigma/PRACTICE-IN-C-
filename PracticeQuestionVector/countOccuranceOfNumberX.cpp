//Count the number of occurance of a particular number x.
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

    int occurance=0;
    cout<<"Number of occurance of "<< x <<":" <<endl;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurance++;
        }
    }
    cout<<occurance;

    return 0;
}
