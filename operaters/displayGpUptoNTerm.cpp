#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms :";
    cin >> n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=2;
    }
    return 0;
}