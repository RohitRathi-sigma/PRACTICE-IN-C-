
#include <iostream>
using namespace std;
int main() {
    int array[]={4,5,6,7,8};
    int n=4;     //Number that you will check.
    int ans=-1;  //If number not found then output.

    for(int i=0;i<5;i++){
        if(array[i]==n){
             ans=i;
             break;
        }
    }
    cout<<ans;
    
    return 0;
}