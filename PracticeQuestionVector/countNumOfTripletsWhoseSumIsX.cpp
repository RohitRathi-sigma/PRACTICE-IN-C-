//count the number of triplets whose sum is equal to the given value x.
#include <iostream>
using namespace std;

int main(){
    int array[]={3,4,2,7,1,0};
    int targetsum=8;
    int size=6;

    int triplets=0;
    cout<<"Num of triplets:";
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;

    return 0;
}

