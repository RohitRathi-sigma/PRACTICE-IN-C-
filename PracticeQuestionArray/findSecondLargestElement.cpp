//Find second largest element in the given array.
#include <iostream>
#include <climits>
using namespace std;

int largestElementIndex(int array[], int size){
    int max= INT_MIN;
    int maxIndex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxIndex=i;
        }
    }
return maxIndex;
}

int main(){
    int array[]={2,3,5,9,8,1};
    cout<<"Second largest element:";
    int Indexoflargest=largestElementIndex(array,6);
    array[Indexoflargest]=-1;
    int Indexofsecondlargest=largestElementIndex(array,6);
    cout<<array[Indexofsecondlargest]<<endl;

    return 0;
}